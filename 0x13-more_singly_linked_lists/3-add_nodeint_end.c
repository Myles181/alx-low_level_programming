#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end
 * @head: head pointer
 * @n: integer parameter
 * Return: temp
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	ptr = *head;

	if (head == NULL)
		return (NULL);

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp->n = n;
	temp->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (temp);
}
