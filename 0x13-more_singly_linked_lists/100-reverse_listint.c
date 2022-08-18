#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse the linked list
 * @head: the head pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	next = NULL;
	prev = NULL;

	if ((*head) == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
