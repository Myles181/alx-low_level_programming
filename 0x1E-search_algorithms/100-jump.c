#include "search_algos.h"

/**
 * jump_search - Find the value in array using
 * Jump Search Algorithm
 * @array: An array of integers
 * @size: Length of the array
 * @value: Element to search for
 * Return: index of value or -1 for failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL)
		return (-1);

	start = 0;
	end = sqrt(size);
	/* Create sub-array using Jump search */
	while ((array[end] < value) && (end < size))
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);
	}
	/* Display range of sub-array in array */
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	/* Linear search through sub-array */
	for (i = start; i <= end; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
