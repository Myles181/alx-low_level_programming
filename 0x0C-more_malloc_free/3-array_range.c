#include "main.h"
#include <stdlib.h>
/**
 * array_range - the range of two integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i, *p, range;

	range = max - min + 1;
	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * range);
	if (p == 0)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		p[i] = min++;
	}
	return (p);
}
