/*
 * bubblesort.c
 * Aufgabe2 <SystemProgrammierung>
 *
 * Daniel Rill (300989)
 *
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include <ctype.h>
//#include <iostream>	// C++ check


int main(int argc, char *argv[])
{
    srand((unsigned int) time(NULL));

    if (argc != 2)
    {
        fprintf(stderr, "Fehler: Aufruf ohne Zahl\n");
        return 1;
    }

    int n = atoi(argv[1]);
    int *arr = (int*) malloc (n * sizeof (int));

    // C++ --> (int*) malloc (n * sizeof (int));
    // C      --> malloc (n * sizeof (int));
    if (arr == NULL)
    {
        fprintf(stderr, "Speicherallokierung fehlgeschlagen!\n");
        return 1;
    }

    printf("%d ganze Zahlen eingeben: \n", n);

    for (int i = 0; i < n; ++i)
    {
        if (scanf("%d", &arr[i]) != 1 /*&& isdigit(&arr[i])*/)
        {
            arr[i] = rand();
            printf("%d", arr[i]);
        }

    }

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }


    printf("sortierte Zahlenfolge: \n");
    for (int i = 0; i < n; ++i)
        printf("%d\n", arr[i]);
    free(arr);

    return 0;
}
