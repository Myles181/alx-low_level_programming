#include "lists.h"
#include <stdlib.h>

/**
 * list_len - list number of elements in the linked list
 * @h: Node parameter
 * Return: counter(i)
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	return (i);
}
