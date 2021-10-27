#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int value;
	char strs[20];
	strcpy(strs, "12345678");
	
	value = atoi(strs);
	printf("String = %s\t\t Address = %p\nInt = %d\t\t Adress = %p\n", strs, &strs, value, &value);
	
	int value1;
	char strs1[40];
	strcpy(strs1, "hier wird's null");
	value1 = atof(strs1);
	printf("\nString = %s\t Address = %p\nInt = %d\t\t Adress = %p\n", strs1, &strs1, value1, &value1);
	
	
	return 0;
}
