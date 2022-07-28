#include "main.h"
#include <stdlib.h>
/**
 * _calloc - to allocate memory
 * @nmemb: number in bytes
 * @size: Second param
 * @Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(nmemb) * size);
	if (p  == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = 1;
		i++;
	}
	return (p);
}
