#include "search_algos.h"

size_t min(size_t a, size_t b);

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right, mid, j;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	/* Find the sub-array in array. Using exponential*/
	while ((array[i] < value) && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = min(i, size - 1);
	/* Display range of sub-array from main array */
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	/* Use binary tree to find value in sub-array */
	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (j = left; j <= right; j++)
		{
			if (j == right)
				printf("%d\n", array[j]);
			else
				printf("%d, ", array[j]);
		}
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * min - Find minimum value between a and b
 * @a: First parameter
 * @b: Second parameter
 * Return: minimum value.
 */
size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
