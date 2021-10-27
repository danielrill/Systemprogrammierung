/*
 *
 * aufgabe1.c
 *
 * Daniel Rill (300989)
 *
 * 25.03.2021
 */

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    // Die 15 Grundtypen 					Platzbedarf in Byte
    bool dozer 				= 1;			// hier 1, aber --> im Sprachstandard offen
    int eger 				= 2;			// typisch 4	(ILP32 + ILP64)
    short int si 				= 24;			// typisch 2	(ILP32 + ILP64)
    long int li				= 1024L;		// typisch 4 	(ILP32),  8 (ILP64)
    long long int lli			= 65536LL;		// typisch 8	(ILP32 + ILP64)

    unsigned int ui			= 0x800U;		// typisch 4	unsigned --> ohne einfluss
    unsigned short int usi	= 0x100U;		// typisch 2	unsigned --> ohne einfluss
    unsigned long int uli	= 0x200UL;		// typisch 4 	(ILP32),  8 (ILP64)  unsigned --> ohne einfluss
    unsigned long long ulli	= 0x400ULL;		// typisch 8	(ILP32 + ILP64)
    float ing				= 2.56F;		// typisch 4 	(<= double)

    double beef			= 5.12;			// typisch 8	(<= long double)
    long double cheese		= 10.24L;		// typisch 16 (>= double)
    char lotte				= 'c';			// 1
    signed char sc			= 64;			// 1
    unsigned char uc		= 0x30U;		// 1
    // Zeigerdefinition
    const char* s			= "Hallo";		// typisch 8

    // bool dozer
    printf("Adresse: %p\t\t", (void*) &dozer);	//&dozer
    printf("sizeof: %zu\t", sizeof dozer);
    printf("Variablentyp: bool\t\t\t");
    printf("Name: dozer\t");
    printf("Wert: %d\n", dozer);

    // int eger
    printf("Adresse: %p\t\t", (void*) &eger);		//&eger
    printf("sizeof: %zu\t", sizeof eger);
    printf("Variablentyp: int\t\t\t");
    printf("Name: eger\t");
    printf("Wert: %d\n", eger);

    // short int si
    printf("Adresse: %p\t\t", (void*) &si);		//&si
    printf("sizeof: %zu\t", sizeof si);
    printf("Variablentyp: short int\t\t\t");
    printf("Name: si\t");
    printf("Wert: %d\n", si);

    // long int li
    printf("Adresse: %p\t\t", (void*) &li);		//&li
    printf("sizeof: %zu\t", sizeof li);
    printf("Variablentyp: long int\t\t\t");
    printf("Name: li\t");
    printf("Wert: %ld\n", li);						// mod ld

    // long long int lli
    printf("Adresse: %p\t\t", (void*) &lli);		//&lli
    printf("sizeof: %zu\t", sizeof lli);
    printf("Variablentyp: long long int\t\t");
    printf("Name: lli\t");
    printf("Wert: %lld\n", lli);					// modlld

    // unsigned int ui
    printf("Adresse: %p\t\t", (void*) &ui);		//&ui
    printf("sizeof: %zu\t", sizeof ui);
    printf("Variablentyp: unsigned int\t\t");
    printf("Name: ui\t");
    printf("Wert: %u\n", ui);						// mod u

    // unsigned short int usi
    printf("Adresse: %p\t\t", (void*) &usi);		//&usi
    printf("sizeof: %zu\t", sizeof usi);
    printf("Variablentyp: unsigned short int\t");
    printf("Name: usi\t");
    printf("Wert: %u\n", usi);					// mod u

    // unsigned long int uli
    printf("Adresse: %p\t\t", (void*) &uli);		//&uli
    printf("sizeof: %zu\t", sizeof uli);
    printf("Variablentyp: unsigned long int\t\t");
    printf("Name: uli\t");
    printf("Wert: %lu\n", uli);					// mod lu

    // unsigned long long int ulli
    printf("Adresse: %p\t\t", (void*) &ulli);		//&ulli
    printf("sizeof: %zu\t", sizeof ulli);
    printf("Variablentyp: unsigned long long int\t");
    printf("Name: ulli\t");
    printf("Wert: %llu\n", ulli);					// mod llu

    // float ing
    printf("Adresse: %p\t\t", (void*) &ing);		//&ing
    printf("sizeof: %zu\t", sizeof ing);
    printf("Variablentyp: float\t\t\t");
    printf("Name: ing\t");
    printf("Wert: %f\n", ing);					// mod f oder g

    // double beef
    printf("Adresse: %p\t\t", (void*) &beef);		//&beef
    printf("sizeof: %zu\t", sizeof beef);
    printf("Variablentyp: double\t\t\t");
    printf("Name: beef\t");
    printf("Wert: %e\n", beef);					// mod e oder g

    // long double cheese
    printf("Adresse: %p\t\t", (void*) &cheese);	//&cheese
    printf("sizeof: %zu\t", sizeof cheese);
    printf("Variablentyp: long double\t\t");
    printf("Name: cheese\t");
    printf("Wert: %Lg\n", cheese);				// mod LG

    // char lotte
    printf("Adresse: %p\t\t", (void*) &lotte);		//&lotte
    printf("sizeof: %zu\t", sizeof lotte);
    printf("Variablentyp: char\t\t\t");
    printf("Name: lotte\t");
    printf("Wert: %c\n", lotte);					// mod c

    // signed char sc
    printf("Adresse: %p\t\t", (void*) &sc);		//&sc
    printf("sizeof: %zu\t", sizeof sc);
    printf("Variablentyp: signed char\t\t");
    printf("Name: sc\t");
    printf("Wert: %d\n", sc);					// mod d

    // unsigned char uc
    printf("Adresse: %p\t\t", (void*) &uc);		//&uc
    printf("sizeof: %zu\t", sizeof uc);
    printf("Variablentyp: unsigned char\t\t");
    printf("Name: uc\t");
    printf("Wert: %d\n", uc);					// mod d

    // const char* s
    printf("Adresse: %p\t\t", (void*) &s);			//&s
    printf("sizeof: %zu\t", sizeof s);
    printf("Variablentyp: const char*\t\t");
    printf("Name: s\t\t");
    printf("Wert: %s\n", s);						// mod s

    // Ermittle DatenModell	(ILP32 / LP64 / LLP64)

    if (sizeof (int) == 4 && sizeof (long int) == 4 && sizeof (char*) == 4)
    {
        printf("ILP32-Datenmodell ermittelt...\n");
    }
    else if (sizeof (int) == 4 && sizeof (long int) == 8 && sizeof (char*) == 8)
    {
        printf("LP64-Datenmodell ermittelt...\n");
    }
    else if (sizeof (int) == 4 && sizeof (long int) == 4 && sizeof(char*) == 8 && sizeof (long long int) == 8)
    {
        printf("LLP64-Datenmodell ermittelt...\n");
    }
    else
    {
        printf("Selbszerstörung eingeleitet...\n");
    }
    //Speicherausnutzung
    int ges = ((long) &dozer + 1 ) - (long) &s;
    printf("GesamtspeicherAuslastung(näherungsweise): %d\n", ges);


    return 0;
}
