#include "main.h"
#include <string.h>

/**
 * _puts - Entry point
 * @str: Print the characters in the string
 * Return: Always 0.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
