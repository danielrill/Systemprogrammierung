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

void sort(char **arr, int length, int (*cmp_func)(const char*, const char*))
{
    char **begin = arr;
    char ** end = arr + length - 1;
    char **current, **lastSwap;

    while (begin < end)
    {
        lastSwap = begin;

        for (current = begin; current < end; ++current)
        {
            char **next = current + 1;

            if (cmp_func(*current, *next) > 0)
            {
                char *tmp = *current;
                *current = *next;
                *next = tmp;

                lastSwap = next;
            }
        }
        end = lastSwap;
    }
}

void print (char **arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%s", arr[i]);

        if (i + 1 < length)
        {
            printf(", ");
        }
    }
}

int main(int argc, char **argv)
{

    srand((unsigned int)time(NULL));
    int i,  strSize = 0, length;
    //int *inArr;
    char *strArr, *sortedArray, **ptrArr;

    if (argc != 2)
    {
        printf("Aufruf: c Stringsort Anzahl");
        return 1;
    }

    int inSize = atoi(argv[1]);
    int m = strlen(argv[1]) + 1;
    char* inArr = (char *) malloc (m * inSize);

    if (inArr == NULL)
    {
        fprintf(stderr, "Speicherallokierungsfehlert!\n");
        return 1;
    }


    for (i = 0; i < inSize; ++i)
    {

        inArr[i] = rand() % inSize;
        printf("%d", inArr[i]);

        if (i + 1 < inSize)
            printf(", ");

    }
    // Strings printen
    strArr = (char*) malloc(sizeof(char) * strSize);
    ptrArr = (char**) malloc(sizeof(char) * inSize);
    ptrArr[0] = strArr;

    if (strArr == NULL)
    {
        fprintf(stderr, "Speicherallokierung fehlgeschlagen! (strArr)\n");
        return 1;
    }
    if (ptrArr == NULL)
    {
        fprintf(stderr, "Speicherallokierung fehlgeschlagen! (ptrArr)\n");
        return 1;
    }

    for (i = 0; i < inSize; ++i)
    {
        length = sprintf(ptrArr[i], "%d", inArr[i]);

        if (i + 1 < inSize)
            ptrArr[i + 1] = ptrArr[i] + length + 1;
    }
    //Strings sortieren
    sort(ptrArr, inSize, strcmp);

    //sortiertes Feld

    sortedArray = (char*) malloc(sizeof(char) * (strSize + inSize - 1));
    if (sortedArray == NULL)
    {
        fprintf(stderr, "Speicherallokierungsfehler! (sortedArray)\n");
        return 1;
    }
    for (i = 0, length = 0; i < inSize; ++i)
    {
        if (i > 0 && strcmp(ptrArr[i - 1], ptrArr[i]) == 0)
        {
            length += sprintf(sortedArray + length, "*");
        }
        else
        {
            if (i > 0)
            {
                length += sprintf(sortedArray + length, ", ");
            }
            length += sprintf(sortedArray + length, "%s", ptrArr[i]);
        }
    }

    printf("\n");
    printf("Sortierte Folge: \n%s\n\n", sortedArray);

    free(inArr);
    free(strArr);
    free(ptrArr);
    free(sortedArray);

    return 0;
}


