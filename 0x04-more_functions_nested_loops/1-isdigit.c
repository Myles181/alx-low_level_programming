#include <stdio.h>
/**
 * _isdigit - TO check for digit
 * @c: this is the digit
 * Return: 0 or 1
 */
int _isdigit(int c)

{
	if (c <= 9 && c >= 0)
		return (1);
	else
		return (0);
}
