#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: This is the string that seperates each number
 * @n: The unmber of integers passed in
 * Return: num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i != n - 1)
		{
			if (*separator != '\0')
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
