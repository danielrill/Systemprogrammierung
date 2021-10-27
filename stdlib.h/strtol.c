#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char str[30] = "2132322 Der Text Dazu";
	char *ptr;
	long result;
	result = strtol(str, &ptr, 10);
	
	printf("Die Zahl(Long) ist = %ld\n", result);
	printf("Die Zeichenkette ist = %s\n", ptr);
	printf("Insgesamt wars = %s\n", str);
	
	return 0;
}
