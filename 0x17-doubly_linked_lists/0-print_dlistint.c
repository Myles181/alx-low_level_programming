#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints linked lists
 * @h: head of the list
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int i = 0;

	ptr = h;

	if (h == NULL)
	{
		return NUL;L
	}
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
