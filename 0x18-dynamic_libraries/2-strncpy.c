#include "main.h"
#include <string.h>
/**
 * _strncpy - Copy value of a string into another string
 * @dest: The first param
 * @src: The second param
 * @n: The integer
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0, j = 0; dest[j] != '\0' && src[i] != '\0' && i < n; i++, j++)
	{
		dest[j] = src[i];
	}
	return (dest);
}
