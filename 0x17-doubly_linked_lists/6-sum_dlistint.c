#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - print all the sum of data in the linked list
 * @head: Head pointer
 * Return: sum of all node data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	if (head == NULL)
		return (EXIT_FAILURE);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
