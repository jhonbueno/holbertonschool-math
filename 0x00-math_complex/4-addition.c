#include <stdio.h>
#include "holberton.h"

/**
 * addition - modulus complex number
 * @c: complex type
 *
 *
 *
 * Return: double
 */

void addition(complex c1, complex c2, complex *c3)
{
	complex *com1, *com2;

	com1 = &c1;
	com2 = &c2;
	c3->re = com1->re + com2->re;
	c3->im = com1->im + com2->im;

}
