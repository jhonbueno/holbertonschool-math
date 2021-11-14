#include <stdio.h>
#include "holberton.h"

/**
 * conjugate - conjugate
 * @c: complex type
 *
 *
 *
 * Return: complex
 */

complex conjugate(complex c)
{
	complex *com;

	com = &c;
	com->im = -com->im;

	return (c);
}
