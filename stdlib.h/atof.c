#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	float value;
	char str[20];
	strcpy(str, "12345678");
	
	value = atof(str);
	printf("String = %s\t\t Address = %p\nFloat = %f\t\t Adress = %p\n", str, &str, value, &value);
	
	float value1;
	char str1[40];
	strcpy(str1, "hier wird's null");
	value1 = atof(str1);
	printf("\nString = %s\t Address = %p\nFloat = %f\t\t Adress = %p\n", str1, &str1, value1, &value1);
	
	
	return 0;
}

	
	
