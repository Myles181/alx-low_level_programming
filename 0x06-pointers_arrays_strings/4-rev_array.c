#include "main.h"
/**
 * reverse_array - reverse  the code
 * @a: the first integer 
 * @n: the second integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
