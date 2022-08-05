#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: The seperating string
 * @n: number of characters in string
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str  = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);

		if (separator != NULL)
			if (i != n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
