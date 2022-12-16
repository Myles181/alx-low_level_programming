#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: Show c is a lower case letter
 *
 * Return: 0 or 1
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
