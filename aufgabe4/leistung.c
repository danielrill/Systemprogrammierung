/*
 *
 * leistung.c
 * Systemprogrammierung Aufgabe 4
 *
 * Daniel  Rill
 * 06.05.2021
 */

#include "leistung.h"
#include "spo3_ain2.h"
#include <stdio.h>
#include <string.h>

// Stringification (Bonus)

#define IDENTIFIER(IDENT) #IDENT
#define STR(MACRO) IDENTIFIER(MACRO) 


static void ausgeben_benotet(int);

static void ausgeben_unbenotet(char);

bool leistung_einlesen (leistung *modul)
{
    int erfolgreich;
    char *unterStrich;

    erfolgreich = scanf("%"STR(MODULSIZE)"s", modul -> modul);
    if (erfolgreich != 1)
        return false;

    erfolgreich = scanf("%d", &modul -> note);


    if (erfolgreich == 1)
    {
        modul -> typ = benotet;
    }
    else if (scanf("%c", &modul -> status) == 1)
    {
        modul -> typ = unbenotet;
    }
    else
        return false;

    for (unterStrich = modul -> modul;
            (unterStrich = strchr(unterStrich, '_')) != NULL;)
    {
        *unterStrich = ' ';
    }
    return true;
}

void ausgeben (const leistung *note)
{
    if (! ist_ain2_modul(note -> modul))
    {
        printf("Fehler: %s\n", note -> modul);
        return;
    }

    printf("%-*s\t", MODULSIZE, note -> modul);

    if (note -> typ == benotet)
    {
        ausgeben_benotet (note -> note);
    }
    else if (note -> typ == unbenotet)
    {
        ausgeben_unbenotet (note -> status);
    }
    else
        fprintf(stderr, "da ist was schiefgelaufen !\n");
}

static void ausgeben_benotet (int note)
{
    int vorkomma = note / 10;
    int nachkomma = note - (10 * vorkomma);

    if (ist_spo_note(note))
    {
        printf("L\t%d,%d\n", vorkomma, nachkomma);
    }
    else
        printf("L\tFehler: %d\n", note);
}

static void ausgeben_unbenotet (char status)
{
    char s = status;

    if (s == 'B')
    {
        printf("S\tbestanden\n");
    }
    else if (s == 'N')
    {
        printf("S\tnicht bestanden\n");
    }
    else
        printf("S\tFehler: %c\n", s);
        
}
