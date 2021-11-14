#include <stdio.h>
#include "holberton.h"
#include <math.h>

/**
 * modulus - modulus complex number
 * @c: complex type
 *
 *
 *
 * Return: double
 */

double modulus(complex c)
{
	complex *com;
	double modulo;

	com = &c;
	modulo = sqrt((pow(com->re, 2)) + (pow(com->im, 2)));

	return (modulo);
}
