#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add node starting from the end
 * @head: head pointer
 * @n: integer parameter
 * Return: new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
