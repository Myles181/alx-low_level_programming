#include "search_algos.h"

/**
 * linear_search - Find a value in an array using
 * linear Search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: Value to be searched
 * Return: index of Value or -1 for failure
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i])
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
