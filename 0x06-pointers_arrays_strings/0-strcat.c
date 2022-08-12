#include "main.h"
#include <string.h>
/**
 * _strcat - Entry point
 * @dest: The string to be concatenated
 * @src: The string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = strlen(dest);
	len2  = strlen(src);

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
