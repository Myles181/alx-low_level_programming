#include "main.h"
#include <stdlib.h>
/**
 * _calloc - to allocate memory
 * @nmemb: number in bytes
 * @size: Second param
 * Return: pointer p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *p;
	void *mem = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	p = mem;
	if (p  == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		p[i] = (nmemb * size);
		i++;
	}
	p[i] = 0;
	return (p);
}
