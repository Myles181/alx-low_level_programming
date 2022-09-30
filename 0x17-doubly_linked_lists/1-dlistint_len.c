#include "lists.h"

/**
 * dlistint_len - count list
 * @h: head pointer
 * Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int i = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return(i);
}
