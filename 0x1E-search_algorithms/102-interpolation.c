#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t p, l, h;

	/*
	 * p - position
	 * l - low
	 * h - high
	 * Couldn't give better variable names because of the betty checker
	 */
	if (array == NULL)
		return (-1);

	h = size - 1;
	l = 0;

	while ((l <= h) && (array[l] < value || array[h] > value))
	{
		p = l + (((size_t)((h - l) / (array[h] - array[l]))) * (value - array[l]));

		if (p < size)
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}
		if (array[p] == value)
			return (p);

		else if (array[p] < value)
			l = p + 1;

		else
			h = p - 1;
	}
	return (-1);
}
