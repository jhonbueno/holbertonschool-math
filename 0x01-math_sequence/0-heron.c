#include <stdio.h>
#include "heron.h"
#include <math.h>

/**
 * heron- singly linked list
 * @p: double
 * @x0: double
 *
 *
 * Return: t_cell
 */

t_cell *heron(double p, double x0)
{
	t_cell *sq = NULL;
	int i = x0;

	while ((fabs(sq->elt - sqrt(p))) <= 1/10000000)
	{
		sq->elt = (i + (p / i)) / 2;
		sq->next = NULL;
		i++;
	}
	return (sq);
}
