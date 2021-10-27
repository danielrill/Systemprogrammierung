/*
 *
 * stringsort.c
 * Systemprogrammierung Aufgabe 3
 *
 * Daniel  Rill
 * 06.05.2021
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

void qsort(void* a, size_t n, size_t m, int(*strcmp)(const void *, const void*))
{
    //char *swap;
    char *swap =  malloc(m);
    if (swap == NULL)
    {
        fprintf(stderr, "Speicherallokierungsfehler!\n");
        exit(1);
    }

    for (int i = n; i > 1; i--)
    {
        for (int j = 0; j < i - 1; ++j)
        {
            if (strcmp((char*) a + j * m, (char *) a + (j + 1) * m) > 0)
            {
                memcpy(swap, (char*) a + (j + 1) * m, m);
                memcpy((char *) a + (j + 1) * m, (char*) a + j * m, m);
                memcpy((char *) a + j * m, swap, m);
            }
        }
    }
    free(swap);
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Aufruf: %s Anzahl\n", argv[0]);
        return 1;
    }

    srand((unsigned int) time(NULL));

    int n = atoi(argv[1]);
    int m = strlen(argv[1]) + 1;
    //char *a;
    char* a =  malloc (n * m);

    if (a == NULL)
    {
        fprintf(stderr, "Speicherallokierungsfehler!\n");
        return 1;
    }
    printf("unsortiertes Array:\n");
    int summe = 0;
    for (int b = 0; b < n; ++b)
    {
        int tmp = rand() % n;
       summe += sprintf(a + b * m, "%d", tmp) ;
        printf("%s ", a + b * m);
    }


    // Strings sortieren
    qsort(a, n, m, (int (*) (const void*, const void*)) strcmp);

    // Ausgabe

    printf("\nsortiertes Array:\n");
    char *strArray = malloc (summe+n);

    if (strArray == NULL)
    {
        fprintf(stderr, "Speicherallokierung fehlgeschlagen!\n");
        return 1;
    }

    strcpy(strArray, a);
    for (int b = 1; b < n; ++b)
    {
        if (strcmp(a + b * m, a + (b - 1) * m) == 0)
        {
            strcat(strArray, "*");
        }
        else
        {
            strcat(strArray, " ");
            strcat(strArray, a + b * m);
        }
    }

    printf("%s\n",strArray);
    free(strArray);
    free(a);
    return 0;

}


