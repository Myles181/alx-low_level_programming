#include "main.h"
/**
 * _puts_recursion - Print value of s
 * @s: First param
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s = s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
