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
	strcat(dest, src);

	return (dest);
}
