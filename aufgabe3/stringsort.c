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

void bubblesort(char **a, int n)
{
    for (int i = n; i > 1; --i)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (strcmp(a[j], a[j + 1]) > 0)
            {
                char *tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Aufruf: %s Anzahl\n", argv[0]);
        return 1;
    }
    int n = atoi (argv[1]);

    // Speicher reservieren
    char ** a = (char**) malloc (n * sizeof(char*));
    if (a == NULL)
    {
        fprintf(stderr, "Speicherallokierungsfehler!\n");
        return 1;
    }

    // Zufallsgenerator
    srand((unsigned int) time(NULL));

    // Array
    printf("unsortiertes Array: \n");
    int len = 0;
    for (int i = 0; i < n; ++i)
    {
        // size = strlen(str)
        a[i] = (char*) malloc ((n + 1));
        if (a[i] == NULL)
        {
            fprintf(stderr, "Speicherallokierungsfehler! (Array)\n");
            return 1;
        }


        // int --> string

        int r = rand() % n;
        sprintf(a[i], "%d", r);

        len += (strlen(a[i]) + 2);

        printf("%s ", a[i]);
    }

    bubblesort(a, n);
    // prüfe Anzahl

    char *strArray = (char*) malloc (len);
    if (strArray == NULL)
    {
        fprintf(stderr, "Speicherallokierungsfehler!\n");
        return 1;
    }

    strcpy(strArray, a[0]);
    for (int i = 1; i < n; i++)
    {
        if (strcmp(a[i], a[i - 1]) != 0)
        {
            strcat(strArray, " ");
            strcat(strArray, a[i]);
        }
        else
        {
            strcat(strArray, "*");
        }
    }
    strcat(strArray, " ");

    printf("\nsortiertes Array:\n");
    printf("%s \n", strArray);

    free(strArray);
    for (int i = 0; i < n; ++i)
    {
        free(a[i]);
    }
    free(a);

    return 0;
}

