#include "lists.h"

/**
 * add_dnodeint - This function adds a node to the beginning
 * @head: This is the head pointer
 * @n: This is the data stroed in the node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}

	temp->next = *head;

	if (temp->next == NULL)
	{
		return (NULL);
	}
	*head = temp;
	return (temp);
}
