#include "main.h"
#include <stdio.h>
/**
 * _strspn - Print the length of the bytes
 * @s: First param
 * @accept: Second param
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	for (len = 0; len < '\0'; len++)
	{
		s[len] = accept[len];
	}
	return (s[len]);
}
