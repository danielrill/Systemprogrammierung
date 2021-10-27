#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char str[30] = "21.32322 Der Text Dazu";
	char *ptr;
	double result;
	result = strtod(str, &ptr);
	
	printf("Die Zahl(double) ist = %lf\n", result);
	printf("Die Zeichenkette ist = %s\n", ptr);
	printf("Insgesamt wars = %s\n", str);
	
	return 0;
}

