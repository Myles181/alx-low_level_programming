#include "main.h"
/**
 * puts2 - Entry point
 * @str: Display the string starting from the first character
 *skipping 2's
 * Return: nothing.
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
