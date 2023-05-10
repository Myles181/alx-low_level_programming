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
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = (int)sqrt(size - 1);
	/* Create sub-array using Jump search */
	printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	while ((array[right] < value) && (right < size))
	{
		left = right;
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		right += (int)sqrt(size - 1);
	}
	/* Display range of sub-array in array */
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	/* Linear search through sub-array */
	for (i = left; i <= size - 1; i++)
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
