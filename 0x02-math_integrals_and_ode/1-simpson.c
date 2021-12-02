#include "rectangle.h"
#include <math.h>
#include <stdio.h>

/**
 * simpson - calculate area simpson aproximation
 *
 * @a: side double
 * @b: side double
 * @steps: number of aproximations
 *
 */

double simpson(double a, double b, int steps )
{
	int i;
	double width;
	double area, Xi;

	width = (b - a) / steps;

	for (i = a; i < steps; i++)
	{
		if (i == a)
		{
			area = 1 / (1 + (pow(a, 2)));
			continue;
		}
		Xi = i * width;
		if (i % 2 != 0)
		{
			area += 4 * (1 / (1 + (pow(Xi, 2))));
			printf("El valor de i:%d y area: %f\n", i, area);
		}
		else
			area += 2 * (1 / (1 + (pow(Xi, 2))));
	}

	area += 1 / (1 + (pow(b, 2)));
	area = (width / 3) * area;
	return (area);
}
