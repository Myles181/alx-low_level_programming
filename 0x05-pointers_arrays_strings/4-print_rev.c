#include "main.h"
#include <string.h>
/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
