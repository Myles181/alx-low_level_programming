#include <stdio.h>
#include "1-pi.h"

/**
 * main - check code
 *
 * Return: Always 0.
 */
int main(void)
{
	float a, r;

	r = 98;
	a = PI * r * r;
	printf("%.3f\n", a);
	return (0);
}
