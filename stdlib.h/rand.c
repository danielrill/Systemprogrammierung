#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	srand(time(NULL));		// initialisierung, sollte nur einmal gerufen werden
	
	int r = rand();			// Zahl zwischen int 0 und 32767 (RAND_MAX)
	printf("Die ZufallsZahl lautet: %d\n",r);
	
	
	int i, n;
	time_t t;
	n = 5;
	//Initialisiere Zufallszahlen generator
	srand((unsigned) time(&t));
	// gebe 5 Zufallszahlen aus zwischen 0 und MagicNumber (hier 100)
	for (i = 0; i < n; i++)
		printf("\n%d\n", rand() % 100);
		
	return 0;
}
