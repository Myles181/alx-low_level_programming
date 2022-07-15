#include "main.h"
#include <ctype.h>
/**
 * string_toupper - converts to uppercase
 * @n: Print out n
 * Return: Always 0 for succes
 */
char *string_toupper(char *n)
{
	int j = 0;
	char arr[12];

	while (arr[j])
	{
		*n = arr[j];
		_putchar(toupper(*n));
		j++;
	}
	return (0);
}
