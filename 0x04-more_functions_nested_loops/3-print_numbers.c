#include "main.h"
/**
 * print_numbers - display numbers 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
