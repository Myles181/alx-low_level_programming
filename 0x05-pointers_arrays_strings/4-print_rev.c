#include "main.h"
#include <string.h>
/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i = 0, len;
	char temp;

	len = strlen(s);
	for (; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		_putchar(*s);
	}
	_putchar('\n');
}
