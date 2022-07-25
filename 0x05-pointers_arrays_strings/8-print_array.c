#include "main.h"
#include <stdio.h>
/**
 * print_array - print numbers in array
 * @a: First param
 * @n: Second param
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	i  = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
