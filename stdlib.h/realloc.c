#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	int *ptr;
	n = 5;
	
	printf("Anzahl gewünschter elemente: %d\n", n);
	ptr = (int*)calloc(n, sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory not allocated...\n");
		exit(0);
	}
	else
	{
		printf("Memory successfully allocated using calloc.\n");
		for (i = 0; i < n; ++i)
			ptr[i] = i + 1;
	
		printf("Die Zahlen Lauten: \n");
		for (i = 0; i < n; ++i)
			printf("%d \n", ptr[i]);
		
		n = 10;
		printf("\n\nEnter the new size of the array: %d\n", n);
		ptr = realloc(ptr, n * sizeof(int));
		printf("Memory successfully allocated using realloc...\n");
		for (i = 5; i < n; ++i)
			ptr[i] = i + 1;
		
		printf("Die Elemente des Arrays lauten: ");
		for (i = 0; i < n; ++i)
			printf("%d, ", ptr[i]);
		
		printf("\n");
		free(ptr);
	}
	return 0;
}
