#include <stdio.h>
#include "holberton.h"
#include <math.h>


/**
 * complex_from_mod_arg - singly linked list
 * @c: complex type
 *
 *
 *
 * Return: none
 */

void complex_from_mod_arg (double m, double arg, complex *c3)
{
	c3->re = m;
	c3->im = arg;
}
