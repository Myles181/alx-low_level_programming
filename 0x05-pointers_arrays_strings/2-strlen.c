#include "main.h"
/**
 * _strlen - Entry point
 * @s: Length of string
 * Return: Alwys 0.
 */
int _strlen(char *s)
{
	int len = 0;

	for (; s++;)
	{
		len++;
	}
	return (len);
}
