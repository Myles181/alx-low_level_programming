#include "main.h"
/**
 * _memset - This sets the c value in s
 *
 * @s: First param
 * @b: Second param
 * @n: Third param
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}
	return (s);
}
