#include "main.h"

/**
 * _strlen - count the legth of the string
 * @s: string parameter
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
