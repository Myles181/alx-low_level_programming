#include "main.h"
#include <string.h>

/**
 * puts_half - print through the second half
 * @str: String parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, n, j;

	len = strlen(str);
	n = (len - 1) / 2;

	if (len % 2 != 0)
	{
		for (j = n / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}

	else
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
