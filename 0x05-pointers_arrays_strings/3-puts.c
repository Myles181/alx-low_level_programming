#include "main.h"
#include <string.h>

/**
 * _puts - Entry point
 * @str: Print the characters in the string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
