#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 * argument - modulus complex number
 * @c: complex type
 *
 *
 *
 * Return: double
 */

double argument(complex c)
{
	complex *com;
	double arg;

	com = &c1;
	arg = atan(com->im / com->re);

	return (arg);
}
