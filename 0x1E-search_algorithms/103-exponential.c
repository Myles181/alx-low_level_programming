#include "search_algos.h"

/**
 * min - Find minimum value between a and b
 * @a: First parameter
 * @b: Second parameter
 * Return: minimum value.
 */
size_t min(size_t a, size_t b);

/**
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while ((array[i] < value) && i < size)
		i *= 2;

	left = i / 2;
	right = min(i, size - 1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}
	return (-1);
}

size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
