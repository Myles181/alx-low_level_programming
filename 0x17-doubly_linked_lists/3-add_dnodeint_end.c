#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to end
 * @head - head pointer
 * @n
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = (dlistint_t *)malloc(sizeof(dlistint_t));
	ptr = *head;
	temp->next  = NULL;
	temp->n = n;

	if ((*head) == NULL)
	{
		(*head) = temp;
		return (temp);
	}
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return(temp);
}
