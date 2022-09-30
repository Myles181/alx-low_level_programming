#include "lists.h"

/**
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	temp->n = n;
	temp->next = NULL;
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}
