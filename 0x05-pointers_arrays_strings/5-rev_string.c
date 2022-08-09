#include "main.h"
#include <string.h>
/**
 * rev_string - Entry point
 * @s: Write letters backward
 */
void rev_string(char *s)
{
	int len, i = 0;
	char str;

	len = strlen(s);

	for (; i < len / 2; i++)
	{
		str = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = str;
	}
	_putchar(*s);
}
