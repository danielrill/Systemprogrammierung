/*
 * filecopy.c
 * POSIX Aufgabe7
 *
 * Daniel Rill 18.06.2021
 *
 */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <locale.h>
#include <stdlib.h>
//#include "filecopy.h"


int main(int argc, char *argv[])
{
    if (setlocale(LC_MESSAGES, "de_DE.UTF8") == NULL)
    {
        fprintf(stderr, "\t*** Warnung *** \n,"
                "ihre Spracheinstellungen werden nicht unterstützt");
    }

    if (argc != 3)
    {
        fprintf(stderr, "Aufruf: %s Quelle Ziel\n", argv[0]);
        return 1;
    }

    struct stat srcbuf;

    int src = open(argv[1], O_RDONLY);
    if (src == -1)
    {
        fprintf(stderr, "Quelle %s konnte nicht geöffnet werden, (errno: %d: %s)\n", argv[1], errno, strerror(errno));
        exit(1);
    }


    if (fstat(src, &srcbuf) == -1)
    {
        fprintf(stderr, "Fehler beim ermitteln der Dateigröße:  fstat(%s) (errno: %d: %s) \n", argv[1], errno, strerror(errno));
        exit(1);
    }
    //printf("SourceSize is: %ld Byte\n", srcbuf.st_size);

    int target = creat(argv[2], srcbuf.st_mode);
    if (target == -1)
    {
        fprintf(stderr, "Ziel konnte nicht erstellt werden, Aufruf: creat(%s) (errno: %d: %s) \n", argv[2], errno, strerror(errno));
        exit(1);
    }

    unsigned char* buffer = malloc((size_t) srcbuf.st_size);
    if (buffer == NULL)
    {
        fprintf(stderr, "SpeicherAllokierung fehlgeschlagen,\n"
                "wenden Sie sich an einen Administrator, Aufruf: malloc(%ld) \n", srcbuf.st_size);
        exit(1);
    }


    ssize_t size_read = read(src, buffer, (size_t) srcbuf.st_size);
    //printf("size_read value: %ld\n", size_read);
    if (size_read == -1)
    {
        fprintf(stderr, "Fehler beim lesen des Ziels, Aufruf: read(%s) (errno: %d: %s)", argv[2], errno, strerror(errno));
        exit(1);
    }
    if ((size_t) size_read < (size_t) srcbuf.st_size)
    {
        fprintf(stderr, "die Quelldatei konnte nicht vollständig gelesen werden,\n"
                "wenden Sie sich an einen Administrator, Aufruf: read(%s) \n", argv[1]);
        exit(1);
    }
    ssize_t write_size = write(target, buffer, (size_t) size_read);
    //printf("write_size value: %ld\n", write_size);
    if (write_size == -1)
    {
        fprintf(stderr, "Fehler beim schreiben der Zieldatei (errno: %d: %s) \n", errno, strerror(errno));
        exit(1);
    } else if (write_size != size_read) 
    {
        fprintf(stderr, "die Zield konnte nicht vollständig geschrieben werden,\n"
                "wenden Sie sich an einen Administrator, Aufruf: write(%s) \n", argv[1]);
        exit(1);
    }


    if (close(src) == -1)
    {
        fprintf(stderr, "Fehler beim schließen der Datei,\n"
                "wenden Sie sich an einen Administrator, Aufruf: fclose(%s) (errno: %d: %s) \n", argv[1], errno, strerror(errno));
        exit(1);
    }
    if (close(target) == -1)
    {
        fprintf(stderr, "Fehler beim schließen der Datei,\n"
                "wenden Sie sich an einen Administrator, Aufruf: fclose(%s) (errno: %d: %s) \n", argv[2], errno, strerror(errno));
        exit(1);
    }
    free(buffer);
    return 0;
}
