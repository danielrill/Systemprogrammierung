#include <stdio.h>
#include <stdlib.h>

void exitfunc()
{
	unsigned char count;
	for(count =32; count < 127; count +=1)
	{
		printf("   %3d  -  %c", count,count);
		if (count % 6 == 0)
			printf("\n");
		
	}
}
int main()
{
	// register the termination function
	atexit(exitfunc);
	printf("Starting main program...\n");
	printf("Exiting main program...\n");
	
	return 0;
}
