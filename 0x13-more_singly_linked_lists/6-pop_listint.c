#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node
 * @head: Head node
 * Return: pop || 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int pop;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	pop = ptr->n;
	*head = (*head)->next;
	free(ptr);

	return (pop);
}
