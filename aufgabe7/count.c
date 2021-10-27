/*
 * count.c
 *
 * Zaehlt die Zeichen in Dateien.
 *
 * Author H.Drachenfels
 * Erstellt am: 13.8.2020
 */

#include <stdio.h>    // fopen, fgetc, fclose, ferror, perror
#include <stdint.h>   // intmax_t
#include <inttypes.h> // PRIdMAX

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i)
    {
        FILE *fp = fopen(argv[i], "r");	// first exception Handling
        if (fp == NULL)					// here 
        {
            perror(argv[i]);				// print error : name der Datei 
            continue;						// gehe weiter zur nächsten
        }

        uintmax_t n = 0;				// stdint für print inttypes
        while (fgetc(fp) != EOF)			// zählschleife; zuende wegen Fehler oder DateiEnde
        {
            ++n;
        }

        if (ferror(fp))
        {
            perror(argv[i]);				// Fehler
            fclose(fp);					// auch wenns shief läuft trzdm. schließen!
            continue;						// bei free() genauso ! beim ProgrammEnde is egal!
        }

        printf("%s: %"PRIuMAX" Byte\n", argv[i], n);	// NameDatei; %PRIuMax= lu llu ...
        fclose(fp);
    }

    return 0;
}

