#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long value;
	char str[20];
	strcpy(str, "12345678");
	value = atol(str);
	printf("String = %s\t\t Address = %p\nLong = %ld\t\t Adress = %p\n", str, &str, value, &value);
	
	
	long value1;
	char strs1[40];
	strcpy(strs1, "hier wird's null");
	value1 = atol(strs1);
	printf("\nString = %s\t Address = %p\nLong = %ld\t\t Adress = %p\n", strs1, &strs1, value1, &value1);
	
	
	return 0;
}
