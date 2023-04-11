#include "search_algos.h"

/**
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i])
		if (array[i] == value)
			return (i);
	}
	return -1;
}
int main(void)
{
	int array[10] = [2, 3, 4, 5, 6, 7, 7, 2, 8, 9];
	size_t size = sizeof(array);

	linear_search(array, size, 7);

	return (0);
}
