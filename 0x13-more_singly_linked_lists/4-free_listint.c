#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free the nodes
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
	free(ptr);
}
