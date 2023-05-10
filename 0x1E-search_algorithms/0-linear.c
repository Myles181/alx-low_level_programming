#include "search_algos.h"

/**
 * linear_search - Find index of value  using linear search
 * @array: Array of integers
 * @size: The length of the array
 * @value: Number to find
 * Return: Index of the value in the array(i) or -1 for failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %ld\n", array[i], i);
			return (i);
		}
	}
	return (-1);
}
