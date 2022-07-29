#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - To copy a string
 * @str: first pamam
 * Return: c
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[size] < '\0')
	{
		size++;
	}

	copy = (char *)malloc((sizeof(char) * size) + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	copy[size] = '\0';

	return (copy);
}
