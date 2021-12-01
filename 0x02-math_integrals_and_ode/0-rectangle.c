#include "rectangle.h"
#include <math.h>

/**
 * rectangle_method - calculate area rectangle aproximation
 *
 * @a: side double
 * @b: side double
 * @steps: number of aproximations
 *
 */

double rectangle_method(double a, double b, int steps )
{
	int i;
	double width;
	double area;

	area = 0;

	width = (b - a) / steps;

	for (i = 1; i <= steps; i++)
	{
		area += width * (1 / (1 + pow((a + (i - 1) * width), 2)));
	}

	return (area);
}
