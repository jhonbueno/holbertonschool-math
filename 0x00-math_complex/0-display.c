#include <stdio.h>
#include "main.h"

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
	if (c->im != 0 && c->re != 0)
		printf("%f + %fi", c->re, c->im);
	else if (c->im == 0)
		printf("%f", c->re);
	else if (c->re == 0)
		printf("%f", c->im);
}
