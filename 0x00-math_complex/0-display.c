#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number- singly linked list
 * @c: complex type
 *
 *
 *
 * Return: none
 */

void display_complex_number(complex c)
{
	complex *com;

	com = &c;

	if (com->im != 0 && com->re != 0)
		printf("%.0f + %.0fi\n", com->re, com->im);
	else if (com->im == 0)
		printf("%.0f\n", com->re);
	else if (com->re == 0)
		printf("%.0f\n", com->im);
}
