/*
 *
 * aufgabe1-int.c
 *
 * Daniel Rill (300989)
 *
 * 27.03.2021
 */

#include <stdio.h>
#include <inttypes.h>


int main(void)
{

    //AUSGABE
    int8_t a =	INT8_MAX;				// int8_t
    printf("Adresse: %p\t\t", (void*) &a);
    printf("sizeof: %zu\t", sizeof(int8_t));
    printf("Variablentyp: int8_t\t\t");
    printf("Name: a\t\t");
    printf("Wert: " "%+" PRId8 "\n", a);

    int16_t b = INT16_MAX;
    printf("Adresse: %p\t\t", (void*) &b);
    printf("sizeof: %zu\t", sizeof(int16_t));
    printf("Variablentyp: int16_t\t\t");
    printf("Name: b\t\t");
    printf("Wert: " "%+" PRId16 "\n", b);

    int32_t c = INT32_MAX;
    printf("Adresse: %p\t\t", (void*) &c);
    printf("sizeof: %zu\t", sizeof(int32_t));
    printf("Variablentyp: int32_t\t\t");
    printf("Name: c\t\t");
    printf("Wert: " "%+" PRId32 "\n", c);

    int64_t d = INT64_MAX;
    printf("Adresse: %p\t\t", (void*) &d);
    printf("sizeof: %zu\t", sizeof(int64_t));
    printf("Variablentyp: int64_t\t\t");
    printf("Name: d\t\t");
    printf("Wert: " "%+" PRId64 "\n", d);


    int_fast8_t e = INT_FAST8_MAX;
    printf("Adresse: %p\t\t", (void*) &e);
    printf("sizeof: %zu\t", sizeof(int_fast8_t));
    printf("Variablentyp: int_fast8_t\t");
    printf("Name: e\t\t");
    printf("Wert: " "%+" PRIdFAST8 "\n", e);

    int_fast16_t f = INT_FAST16_MAX;
    printf("Adresse: %p\t\t", (void*) &f);
    printf("sizeof: %zu\t", sizeof(int_fast16_t));
    printf("Variablentyp: int_fast16_t\t");
    printf("Name: f\t\t");
    printf("Wert: " "%+" PRIdFAST16 "\n", f);

    int_fast32_t g = INT_FAST32_MAX;
    printf("Adresse: %p\t\t", (void*) &g);
    printf("sizeof: %zu\t", sizeof(int_fast32_t));
    printf("Variablentyp: int_fast32_t\t");
    printf("Name: g\t\t");
    printf("Wert: " "%+" PRIdFAST32 "\n", g);

    int_fast64_t h = INT_FAST64_MAX;
    printf("Adresse: %p\t\t", (void*) &h);
    printf("sizeof: %zu\t", sizeof(int_fast64_t));
    printf("Variablentyp: int_fast64_t\t");
    printf("Name: g\t\t");
    printf("Wert: " "%+" PRIdFAST64 "\n", g);

    int_least8_t i = INT_LEAST8_MAX;
    printf("Adresse: %p\t\t", (void*) &i);
    printf("sizeof: %zu\t", sizeof(int_least8_t));
    printf("Variablentyp: int_least8_t\t");
    printf("Name: i\t\t");
    printf("Wert: " "%+" PRIdLEAST8 "\n", i);

    int_least16_t j = INT_LEAST16_MAX;
    printf("Adresse: %p\t\t", (void*) &j);
    printf("sizeof: %zu\t", sizeof(int_least16_t));
    printf("Variablentyp: int_least16_t\t");
    printf("Name: j\t\t");
    printf("Wert: " "%+" PRIdLEAST16 "\n", j);

    int_least32_t k = INT_LEAST32_MAX;
    printf("Adresse: %p\t\t", (void*) &k);
    printf("sizeof: %zu\t", sizeof(int_least32_t));
    printf("Variablentyp: int_least32_t\t");
    printf("Name: k\t\t");
    printf("Wert: " "%+" PRIdLEAST32 "\n", k);

    int_least64_t l = INT_LEAST64_MAX;
    printf("Adresse: %p\t\t", (void*) &l);
    printf("sizeof: %zu\t", sizeof(int_least64_t));
    printf("Variablentyp: int_least64_t\t");
    printf("Name: l\t\t");
    printf("Wert: " "%+" PRIdLEAST64 "\n", l);

    intptr_t ptr = INTPTR_MAX;
    printf("Adresse: %p\t\t", (void*) &ptr);
    printf("sizeof: %zu\t", sizeof(intptr_t));
    printf("Variablentyp: intptr_t\t\t");
    printf("Name: ptr\t");
    printf("Wert: " "%ld" PRIdPTR "\n", ptr);

    intmax_t m = INTMAX_MAX;
    printf("Adresse: %p\t\t", (void*) &m);
    printf("sizeof: %zu\t", sizeof(intmax_t));
    printf("Variablentyp: intmax_t\t\t");
    printf("Name: m\t\t");
    printf("Wert: " "%+" PRIdMAX "\n", m);

    uint8_t n =  UINT8_MAX;
    printf("Adresse: %p\t\t", (void*) &n);
    printf("sizeof: %zu\t", sizeof(uint8_t));
    printf("Variablentyp: uint8_t\t\t");
    printf("Name: n\t\t");
    printf("Wert: " "%u" PRIu8 "\n", n);

    uint16_t o =  UINT16_MAX;
    printf("Adresse: %p\t\t", (void*) &o);
    printf("sizeof: %zu\t", sizeof(uint16_t));
    printf("Variablentyp: uint16_t\t\t");
    printf("Name: o\t\t");
    printf("Wert: " "%u" PRIu16 "\n", o);

    uint32_t p =  UINT32_MAX;
    printf("Adresse: %p\t\t", (void*) &p);
    printf("sizeof: %zu\t", sizeof(uint32_t));
    printf("Variablentyp: uint32_t\t\t");
    printf("Name: p\t\t");
    printf("Wert: " "%u" PRIu32 "\n", p);

    uint64_t q =  UINT64_MAX;
    printf("Adresse: %p\t\t", (void*) &q);
    printf("sizeof: %zu\t", sizeof(uint64_t));
    printf("Variablentyp: uint64_t\t\t");
    printf("Name: q\t\t");
    printf("Wert: " "%lu" PRIu64 "\n", q);

    uint_fast8_t r = UINT_FAST8_MAX;
    printf("Adresse: %p\t\t", (void*) &r);
    printf("sizeof: %zu\t", sizeof(uint_fast8_t));
    printf("Variablentyp: uint_fast8_t\t");
    printf("Name: r\t\t");
    printf("Wert: " "%u" PRIu8 "\n", r);

    uint_fast16_t s = UINT_FAST16_MAX;
    printf("Adresse: %p\t\t", (void*) &s);
    printf("sizeof: %zu\t", sizeof(uint_fast16_t));
    printf("Variablentyp: uint_fast16_t\t");
    printf("Name: s\t\t");
    printf("Wert: " "%lu" PRIu16 "\n", s);

    uint_fast32_t t = UINT_FAST32_MAX;
    printf("Adresse: %p\t\t", (void*) &t);
    printf("sizeof: %zu\t", sizeof(uint_fast32_t));
    printf("Variablentyp: uint_fast32_t\t");
    printf("Name: t\t\t");
    printf("Wert: " "%lu" PRIu32 "\n", t);

    uint_fast64_t u = UINT_FAST64_MAX;
    printf("Adresse: %p\t\t", (void*) &u);
    printf("sizeof: %zu\t", sizeof(uint_fast64_t));
    printf("Variablentyp: uint_fast64_t\t");
    printf("Name: u\t\t");
    printf("Wert: " "%lu" PRIu64 "\n", u);

    uint_least8_t v = UINT_LEAST8_MAX	;
    printf("Adresse: %p\t\t", (void*) &v);
    printf("sizeof: %zu\t", sizeof(uint_least8_t));
    printf("Variablentyp: uint_least8_t\t");
    printf("Name: v\t\t");
    printf("Wert: " "%u" PRIuLEAST8 "\n", v);

    uint_least16_t w = UINT_LEAST16_MAX	;
    printf("Adresse: %p\t\t", (void*) &w);
    printf("sizeof: %zu\t", sizeof(uint_least16_t));
    printf("Variablentyp: uint_least16_t\t");
    printf("Name: w\t\t");
    printf("Wert: " "%u" PRIuLEAST16 "\n", w);

    uint_least32_t x = UINT_LEAST32_MAX	;
    printf("Adresse: %p\t\t", (void*) &x);
    printf("sizeof: %zu\t", sizeof(uint_least32_t));
    printf("Variablentyp: uint_least32_t\t");
    printf("Name: x\t\t");
    printf("Wert: " "%u" PRIuLEAST32 "\n", x);

    uint_least64_t y = UINT_LEAST64_MAX	;
    printf("Adresse: %p\t\t", (void*) &y);
    printf("sizeof: %zu\t", sizeof(uint_least64_t));
    printf("Variablentyp: uint_least64_t\t");
    printf("Name: y\t\t");
    printf("Wert: " "%lu" PRIuLEAST64 "\n", y);

    uintptr_t uptr = UINTPTR_MAX;
    printf("Adresse: %p\t\t", (void*) &uptr);
    printf("sizeof: %zu\t", sizeof(uintptr_t));
    printf("Variablentyp: uintptr_t\t\t");
    printf("Name: uptr\t");
    printf("Wert: " "%lu" PRIuPTR "\n", ptr);

    uintmax_t z = UINTMAX_MAX;
    printf("Adresse: %p\t\t", (void*) &z);
    printf("sizeof: %zu\t", sizeof(uintmax_t));
    printf("Variablentyp: uintmax_t\t\t");
    printf("Name: z\t\t");
    printf("Wert: " "%lu" PRIuMAX "\n", z);
}

