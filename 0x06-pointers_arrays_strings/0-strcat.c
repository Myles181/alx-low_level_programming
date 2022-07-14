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
	_putchar(dest);
	_putchar("\n");
	_putchar(src);
	strcat(dest, src);
	_putchar(dest);
	_putchar("\n");
	_putchar(src);
	_putchar("\n");
	_putchar(dest);

	return (0);
}
