#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - print the array of numbers
 * @array: The array param
 * @size: The number of values in the array
 * @action: Function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
