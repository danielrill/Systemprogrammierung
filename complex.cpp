/*
 * complex.cpp
 *
 */
 
#include "complex.h"



complex(double r, double i) { re=r; im = i; }		// two scalars

complex( double r) { re=r; im = 0; }					// one scalar

complex() { re = im = 0; }							// default (0,0)
	
complex operator+(complex a1, complex a2)
{
	return complex( a1.re+a2.re, a1.im+a2.im );
}

complex operator-(complex a1, complex a2)
{
	return complex( a1.re-a2.re, a1.im-a2.im );
}

complex operator-(complex a1)
{
	return complex( re - a1.re , im - a1.im);
}

complex operator*(complex a1, complex a2)
{
	return complex( a1.re*a2.re - a1.im*a2.im , a1.im*a2.im - a1.re*a2.re );
}

complex operator/(complex a1, complex a2)
{
	return complex( (( a1.re*a2.re + a1.im*a2.im ) / ( a2.re*a2.re + a2.im*a2.im )),
					( ( a1.im*a2.re + a1.re*a2.im) / ( a2.re*a2.re + a2.im*a2.im) ) );
}


