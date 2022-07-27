#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: first param
 * @c: Second param
 * Return: 0 or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
		if (array == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			array[i]  = c;
		}
		return (array);
}
