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
	double imnumber;

	com = &c;
	imnumber = com->im;

	if (com->im != 0 && com->re != 0)
	{
		if (com->im < 0)
		{
			signo = '-';
			imnumber = -imnumber;
		}
		else
			signo = '+';

		if (com->im == 1)
			printf("%.0f %c i\n", com->re, signo);
		else
			printf("%.0f %c %.0fi\n", com->re, signo, imnumber);
	}
	else if (com->im == 0)
		printf("%.0f\n", com->re);
	else if (com->re == 0)
	{
		if (com->im == 1)
			printf("i\n");
		else
			printf("%.0f\n", com->im);
	}
}
