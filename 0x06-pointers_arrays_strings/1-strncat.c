#include "main.h"
#include <string.h>
/**
 * _strncat - This concartenate two string but leave out the '\0'
 * @dest: first variable
 * @src: second variable
 * @n: Integer variable
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len1;

	len1 = strlen(dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
