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
	size_t i = 0;

	h = malloc(sizeof(list_t));

	if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
	else
		while (h->str != NULL)
		{
			printf("[%d] %s", h->len, h->str);
			i++;
			h = h->next;
		}
	return (i);
}
