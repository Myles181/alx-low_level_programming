#include "main.h"
/**
 * string_toupper - converts to uppercase
 * @n: Print out n
 * Return: Always 0 for succes
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; i++)
	{
		/* 97 to 122 is a to b */
		if (n[i] >= 97 && n[i] <= 122)
		{
			/* difference between lowercase to uppercase is -32 */
			n[i] -= 32;
		}
	}
	return (n);
}
