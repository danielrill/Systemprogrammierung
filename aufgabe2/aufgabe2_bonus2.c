/*
 *
 * aufgabe2_bonus.c
 * Systemprogrammierung
 * Zusatzaufgabe zur Aufgabe 2
 *
 * Daniel  Rill
 * 08.05.2021
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Fehler: Aufruf ohne Zahl\n");
        return 1;
    }
    int size = atoi(argv[1]);
    //printf("ArrayGröße eingeben: ");
    //scanf("%d", &size);

    int *randomArray = (int*) malloc (size * sizeof (int));
    int i;
    if (randomArray == NULL)
    {
        fprintf(stderr, "Speicherallokierung fehlgeschlagen!\n");
        return 1;
    }
    printf("\nElements of the Array: ");
    for (i = 0; i < size; i++)
    {
        int a = rand() % size;
        randomArray[a] = a;
        printf("\nElement Index %d:: \t%d", i + 1, randomArray[a]);
    }

    printf("\n");
    free(randomArray);
    return 0;
}
