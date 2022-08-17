#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all numbers in a linked list
 * @head: Head pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *n;

	n = head;	
	while (n != NULL)
	{
		sum += n->n;
		n = n->next;
	}
	return (sum);
}
