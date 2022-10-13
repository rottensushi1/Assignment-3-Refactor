#include "Functions.h"

//Taiyo Suzuki
//Sept 23, 2022
//PROG71985 - Assignment 3
//Item 1: Write and test a function called SmallerOf() that replaces the contents of two double variables with the smaller of the two values. 
//For example, SmallerOf(x, y) would reset both x and y to the smaller of the two. Be sure to test(and include) all the edge cases you can think of 
//to ensure your function works for all double variables.

//Implementation of function library

double SmallerOf(double* x, double* y)
{
	if (*y < *x)
		*x = *y;
	else if (*x < *y)
		*y = *x;
	return *x;
}