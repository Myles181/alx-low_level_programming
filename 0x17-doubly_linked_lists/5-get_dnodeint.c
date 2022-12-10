#include "lists.h"

/**
 * get_dnodeint_at_index -  This function gets a node at index position
 * @head: the head pointer
 * @index: The index number
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr;

	ptr = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (count != index)
	{
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
