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
	strncpy(dest, src, n);

	return (dest);
}
