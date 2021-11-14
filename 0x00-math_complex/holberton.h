#ifndef MAIN_H
#define MAIN_H

typedef struct complex_numbers
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);

#endif
