#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get the node at a particular index
 * @head: the head node
 * @index: The index of node
 * Return: ptr
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;

	if (head == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		while (i < index)
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (ptr);
}
