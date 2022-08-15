#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - print out list of elements in a linked list
 * @h: head pointer
 * Return: i
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
