#include "main.h"
/**
 * _strcpy - copy str2 into str1
 * @dest: This is the destination string
 * @src: This is the source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
