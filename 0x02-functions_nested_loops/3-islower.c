#include "main.h"
/**
 * _islower - Entry point
 *
 * Descripption: show if 'c' is a lower_case letter
 * return 1 if true and 0 if false
 *
 * Return: 0
 */
int _islower(int c)
{
	int ch = c;

	if (ch >= 97 && ch <= 122)
		return (1);
	else
		return (0);
}
