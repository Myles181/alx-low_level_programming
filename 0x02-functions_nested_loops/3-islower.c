#include "main.h"
/**
 * _islower - Entry point
 *@c: the variable
 * Descripption: show if 'c' is a lower_case letter
 * return 1 if true and 0 if false
 *
 * Return: 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
