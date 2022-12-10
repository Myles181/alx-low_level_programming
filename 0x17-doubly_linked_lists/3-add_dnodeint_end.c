#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to end
 * @head - head pointer
 * @n: data to be stored in node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *last;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		last = *head;
		while(last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
		node->prev = last;
	}
	return (node);
}
