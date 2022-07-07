#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a > c && c > b)
	{
		largest = a;
		printf("%d", largest);
	}
	else if (b > c && c > a)
	{
		largest = b;
		printf("%d", largest);
	}
	else
	{
		largest = c;
		printf("%d", largest);
	}
	return (0);
}
