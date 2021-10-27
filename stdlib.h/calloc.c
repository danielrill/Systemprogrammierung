#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	int *a;
	
	printf("Anzahl gewünschter elemente:");
	scanf("%d", &n);
	
	a = (int*)calloc(n, sizeof(int));
	printf("Gebe %d Zahlen ein:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	printf("Die Zahlen Lauten: ");
	for (i = 0; i < n; i++)
		printf("%d \n", a[i]);
		
	free(a);
	
	return 0;
}
