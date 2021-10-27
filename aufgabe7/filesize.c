/*
 * filesize.c
 * POSIX Aufgabe7
 *
 * Daniel Rill
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
#include <inttypes.h>
//#include "filesize.h"


void stat_filesize(const char *filename)
{
    struct stat statbuf;

    if (stat(filename, &statbuf) == -1)
    {
        perror(filename);
        exit(1);
    }

    printf(" %s  %"PRIdMAX" \n", filename, (intmax_t) statbuf.st_size); // alternativ %jd
}

int main(int argc, const char **argv)
{
    //printf("LOCALE is: %s\n", setlocale(LC_ALL, ""));
    if (setlocale(LC_ALL, "") == NULL)
    {
        fprintf(stderr, "\t*** Warnung *** \n,"
                "ihre Spracheinstellungen werden nicht unterstützt");
    }

    if (argc < 2)
    {
          unsigned char buffer;
          ssize_t sz;
          uintmax_t n = 0;
          while ((sz = read(0, &buffer, 1))> 0)
        {
            ++n;
        }

        if (sz == -1)
        {
            perror(NULL);
            exit(1);
        }

        printf("%"PRIuMAX" Bytes\n", n);


    }

    for (int i = 1; i < argc; i++)
    {
        stat_filesize(argv[i]);
    }
    return 0;
}

