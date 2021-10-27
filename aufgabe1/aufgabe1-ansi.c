/*
 *
 * aufgabe1.c
 *
 * Daniel Rill (300989)
 *
 * 25.03.2021
 */

#include <stdio.h>


int main(void)
{
    short int a = 128;
    unsigned short int b = 512U;
    unsigned int c = 1028U;
    signed int si = 4096; 
    int d = 2048;
    long int e = 4096L;
    unsigned long ul = 1028UL; 
    signed long sl = 2048L; 
    signed char f = 64;
    unsigned char g = 128U;
    float h = 5.12F;
    double i = 10.28;
    long double j = 20.48L;
    char* s = "Hallo";

    /* Ausgabe */
    printf("Adresse: %p\t\t", (void*) &a);
    printf("sizeof: %lu\t", (unsigned long) sizeof(a));
    printf("Variablentyp: short int\t\t\t");
    printf("Name: a\t");
    printf("Wert: %d\n", a);

    printf("Adresse: %p\t\t", (void*) &b);
    printf("sizeof: %lu\t", (unsigned long) sizeof(b));
    printf("Variablentyp: unsigned short int\t");
    printf("Name: b\t");
    printf("Wert: %d\n", b);

    printf("Adresse: %p\t\t", (void*) &c);
    printf("sizeof: %lu\t", (unsigned long) sizeof(c));
    printf("Variablentyp: unsigned int\t\t");
    printf("Name: c\t");
    printf("Wert: %u\n", c);

    printf("Adresse: %p\t\t", (void*) &d);
    printf("sizeof: %lu\t", (unsigned long) sizeof(d));
    printf("Variablentyp: int\t\t\t");
    printf("Name: d\t");
    printf("Wert: %d\n", d);
    
    printf("Adresse: %p\t\t", (void*) &si);
    printf("sizeof: %lu\t", (unsigned long) sizeof(si));
    printf("Variablentyp: signed int\t\t\t");
    printf("Name: si\t");
    printf("Wert: %d\n", si);
    
    printf("Adresse: %p\t\t", (void*) &ul);
    printf("sizeof: %lu\t", (unsigned long) sizeof(ul));
    printf("Variablentyp: unsigned long int\t\t\t");
    printf("Name: ul\t");
    printf("Wert: %lu\n", ul);
    
    printf("Adresse: %p\t\t", (void*) &sl);
    printf("sizeof: %lu\t", (unsigned long) sizeof(sl));
    printf("Variablentyp: signed long int\t\t\t");
    printf("Name: sl\t");
    printf("Wert: %ld\n", sl);

    printf("Adresse: %p\t\t", (void*) &e);
    printf("sizeof: %lu\t", (unsigned long) sizeof(e));
    printf("Variablentyp: long int\t\t\t");
    printf("Name: e\t");
    printf("Wert: %ld\n", e);

    printf("Adresse: %p\t\t", (void*) &f);
    printf("sizeof: %lu\t", (unsigned long) sizeof(f));
    printf("Variablentyp: signed char\t\t");
    printf("Name: f\t");
    printf("Wert: %d\n", f);

    printf("Adresse: %p\t\t", (void*) &g);
    printf("sizeof: %lu\t", (unsigned long) sizeof(g));
    printf("Variablentyp: unsigned char\t\t");
    printf("Name: g\t");
    printf("Wert: %d\n", g);

    printf("Adresse: %p\t\t", (void*) &h);
    printf("sizeof: %lu\t", (unsigned long) sizeof(h));
    printf("Variablentyp: float\t\t\t");
    printf("Name: h\t");
    printf("Wert: %f\n", h);

    printf("Adresse: %p\t\t", (void*) &i);
    printf("sizeof: %lu\t", (unsigned long) sizeof(i));
    printf("Variablentyp: double\t\t\t");
    printf("Name: i\t");
    printf("Wert: %e\n", i);

    printf("Adresse: %p\t\t", (void*) &j);
    printf("sizeof: %lu\t", (unsigned long) sizeof(j));
    printf("Variablentyp: long double\t\t");
    printf("Name: j\t");
    printf("Wert: %Lg\n", j);

    printf("Adresse: %p\t\t", (void*) &s);
    printf("sizeof: %lu\t", (unsigned long) sizeof(s));
    printf("Variablentyp: char*\t\t\t");
    printf("Name: s\t");
    printf("Wert: %s\n", s);
    
    return 0;

}
