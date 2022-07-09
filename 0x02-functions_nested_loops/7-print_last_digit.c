#include "main.h"
/**
 * print_last_digit - Entry point
 * @num: the int is used to extract the last digit
 * Return: return last number
 */

int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
	last *= -1;
	_putchar(last + '0');
	_putchar('\n');

	return (last);
}
