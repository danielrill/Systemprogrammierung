#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	int *ptr;
	n = 8;
	
	printf("Anzahl gewünschter elemente: %d\n", n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory not allocated...\n"); // space is not sufficient
		exit(0);
	}
	else
	{
	printf("Memory successfully allocated using malloc...\n");
	for (i = 0; i < n; i++)
		ptr[i] = i + 1;
	
		
	printf("Die Zahlen Lauten: \n");
	for (i = 0; i < n; i++)
		printf("%d \n", ptr[i]);
		
	}
	
	return 0;
}
