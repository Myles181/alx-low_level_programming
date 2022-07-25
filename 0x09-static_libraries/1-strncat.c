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
	strncat(dest, src, n);

	return (dest);
}
