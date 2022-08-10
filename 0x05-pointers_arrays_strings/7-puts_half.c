#include "main.h"
#include <string.h>

/**
 * puts_half - print through the second half
 * @str: String parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);
	n = (len - 1) / 2;

	if (len % 2 != 0)
	{
		_putchar(n);
	}

	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
