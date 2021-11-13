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
	char signo;

	com = &c;

	if (com->im != 0 && com->re != 0)
	{
		if (com->im < 0)
			signo = '-';
		else
			signo = '+';

		printf("%.0f %c %.0fi\n", com->re, signo, com->im);
	}
	else if (com->im == 0)
		printf("%.0f\n", com->re);
	else if (com->re == 0)
		printf("%.0f\n", com->im);
}
