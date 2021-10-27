/*
 *
 * leistung.h
 * Systemprogrammierung Aufgabe 4
 *
 * Daniel  Rill
 * 06.05.2021
 */

#ifndef LEISTUNG_H
#define LEISTUNG_H

#include <stdbool.h>

#define MODULSIZE 20

enum leistungsArt						// 4byte
{
    unbenotet,		// 0
    benotet			// 1
};

typedef struct leistung
{
    char modul[MODULSIZE + 1]; //Node	//21byte   +(3) -> Alignment
    enum leistungsArt typ;				//4

    union
    {
        int note;							//4byte -> größte wird ausgweählt
        char status;						//1
    };
} leistung;								// ~32 byte 

bool leistung_einlesen (leistung *modul);

void ausgeben (const leistung *note);

#endif

