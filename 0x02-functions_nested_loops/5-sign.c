#include "main.h"
/**
 * print_sign - function to check the sign of a certai number
 *
 * @n: checking the sign of n
 *
 * Return: 1 greater than zero, -1 less than zeo and 0 equal to 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
