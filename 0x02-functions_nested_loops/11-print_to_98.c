#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line
 * Return: no return
 */
void print_to_98(int n)
{
	for (; n <= 98; n+=1)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
	}
	printf("\n");
}
