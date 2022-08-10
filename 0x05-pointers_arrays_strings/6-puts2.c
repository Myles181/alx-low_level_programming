#include "main.h"
/**
 * puts2 - Entry point
 * @str: Display the string starting from the first character
 *skipping 2's
 * Return: nothing.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
