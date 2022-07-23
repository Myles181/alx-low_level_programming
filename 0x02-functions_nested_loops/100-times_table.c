#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Times table of numbers 0 to 15
 * @n: Times tables Number
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	for (; n > 0 && n < 15; n++)
	{
		for (i = 0; i > 0 && i < 15; i++)
		{
			printf("%d", n * i);
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
	return (0);
}
