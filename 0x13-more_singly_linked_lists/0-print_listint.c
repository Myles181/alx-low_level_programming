#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print elements in a singly linked list
 * @h: Head pointer
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
