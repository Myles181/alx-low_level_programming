#include "main.h"
/**
 * factorial - print the factorial using recursion
 * @n: First param
 * Return: -1 or 1 or n! value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
