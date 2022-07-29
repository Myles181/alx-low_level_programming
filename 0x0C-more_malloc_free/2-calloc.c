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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p  == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		p[i] = 1;
		i++;
	}
	p[i] = '\0';
	return (p);
}
