#ifndef HERON_H
#define HERON_H

typedef struct heron
{
	double elt;
	struct heron *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
