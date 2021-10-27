#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char str[30] = "2132322 Der Text Dazu";
	char *ptr;
	unsigned long result;
	result = strtoul(str, &ptr, 10);
	
	printf("Die Zahl(unsigned Long) ist = %lu\n", result);
	printf("Die Zeichenkette ist = %s\n", ptr);
	printf("Insgesamt wars = %s\n", str);
	
	return 0;
}
