#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free function
 * @head: head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = ptr->next;
		free(ptr);
		ptr = ptr->next;
	}
	free(head);
}
