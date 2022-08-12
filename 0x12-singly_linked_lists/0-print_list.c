#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print linkd lists
 * @h: pointer parameter
 * Return: counter(i)
 */
size_t print_list(const list_t *h)
{
	size_t i;

	h = malloc(sizeof(list_t));

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	free(h);
	return (i);
}
