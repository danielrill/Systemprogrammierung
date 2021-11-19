/*
 * complex.h
 *
 */
 
#ifndef COMPLEX_H
#define COMPLEX_H

class complex {
	double re, im;
	
public:
	complex( double r, double i); 		// two scalars
	complex( double r); 				// one scalar
	complex(); 							// default (0,0)
	
	friend complex operator+(complex, complex);
	friend complex operator-(complex, complex);
	friend complex operator-(complex);
	friend complex operator*(complex, complex);
	friend complex operator/(complex, complex);
	
	friend complex operator==(complex, complex);
	friend complex operator!=(complex, complex);
	
};
	
#endif
