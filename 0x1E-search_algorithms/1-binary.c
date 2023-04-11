#include "search_algos.h"


/**
 * binary_search - Find the given value in the sorted array using
 * Binary Search Algorithm
 * @array: Array of integers
 * @size: Length of the array
 * @value: Value to seach for
 * Return: Index of value or -1 for failure
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size;
	int mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		/* Display the array being searched */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		
		mid = (int)((left + right) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

