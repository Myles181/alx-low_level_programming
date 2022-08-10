#include "main.h"
#include <string.h>
/**
 * puts2 - Entry point
 * @str: Display the string starting from the first character
 *skipping 2's
 * Return: nothing.
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
