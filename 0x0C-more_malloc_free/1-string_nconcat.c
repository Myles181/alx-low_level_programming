#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string destination
 * @s2: string source
 * @n: number of string to be concatenated
 * Return: NULL for faiolure || pointer p for success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, len1 = 0, len2 = 0;
	char *p;

	while (*s2)
	{
		len2++;
	}

	while (*s1)
	{
		n++;
		len1++;
	}

	len = len1 + len2 + n;
	p = malloc(sizeof(char) * len + 1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		return (s2);

	for (i = 0; i < len2; i++)
	{
		p[i] = s1[i];
	}
	p[i] = '\0';
	return (p);
}
