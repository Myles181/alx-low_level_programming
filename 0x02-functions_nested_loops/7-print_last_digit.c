#include "main.h"
/**
 * print_last - Entry point
 *@n: the int is used to extract the last digit
 * Return: return last number
 */
int print_last_digit(int)
{
	int num;
	int last_num = num % 10;

	_putchar(last_num);

	return (last_num);
}

