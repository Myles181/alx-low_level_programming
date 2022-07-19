#include "main.h"
/**
 * _memcpy - This is to copy value from src to dest
 * @dest: Destination variable
 * @src: The source variavble
 * @n: the integer variable
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		dest[len] = src[len];
	}

	return (dest);
}
