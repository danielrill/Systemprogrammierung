/*
 *
 * spo3_ain2.h
 * Systemprogrammierung Aufgabe 4
 *
 * Daniel  Rill
 * 06.05.2021
 */

#include "spo3_ain2.h"
#include <string.h>		//selber eine schreiben ? :)

bool ist_spo_note (int note)
{
    int vorkomma = note / 10;
    int nachkomma = note - (10 * vorkomma);


    if ((vorkomma < 4 && vorkomma > 0 &&
            (nachkomma == 0 || nachkomma == 3 || nachkomma == 7)) ||
            (( vorkomma == 4 || vorkomma == 5) && nachkomma == 0))
        return true;
    return false;
}

bool ist_ain2_modul (const char *modul)
{
    if (strcmp(modul, "Mathematik 2") == 0
            || strcmp(modul, "Programmiertechnik 2") == 0
            || strcmp(modul, "Systemprogrammierung") == 0
            || strcmp(modul, "Stochastik") == 0
            || strcmp(modul, "Rechnerarchitekturen") == 0)
        return true;
    else
        return false;
}

