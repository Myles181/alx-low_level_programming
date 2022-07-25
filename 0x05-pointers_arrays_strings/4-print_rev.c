#include "main.h"
/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i, len;
	char temp;

	while (len < '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		_putchar(s[i]);
	}
	_putchar('\n');
}
