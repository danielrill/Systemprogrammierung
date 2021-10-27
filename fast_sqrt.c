#include <math.h>
#include <stdio.h>
/*
float fast_sqrt ( float number )
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F;
	
	x2 = number * 0.5F;
	y = number;
	i = * (long * ) &y;
	i = 0x5f3759df - ( i >> 1 );
	y = y * ( threehalfs - ( x2 * y * y ) );		// 1st iteration
	//y = y * ( threehalfs - ( x2 * y * y ) );		// 2nd iteration
	
	return y;
}
*/
int main() 
{
	float number = 4.0F;
	float num = 4.0;
	
	long i;
	float x2, y;
	const float threehalfs = 1.5F;
	
	x2 = number * 0.5F;
	y = number;
	i = * (long * ) &y;
	i = 0x5f3759df - ( i >> 1 );
	y = * ( float * ) &i;
	y = y * ( threehalfs - ( x2 * y * y ) );		// 1st iteration
	//y = y * ( threehalfs - ( x2 * y * y ) );		// 2nd iteration
	
	printf("Wert: %f\n", y);	
	

	printf("Wert2: %f\n", sqrtf(num));
	
	return 0;
	
}

