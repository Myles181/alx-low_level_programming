#include "lists.h"
#include <stdlib.h>

/**
 * getsize - to get the number of elements in the linked lists
 * @head: Head pointer
 * Return: size
 */
int getsize(listint_t *head)
{
	int size = 0;

	while (head != NULL)
	{
		head  = head->next;
		size++;
	}
	return (size);
}
/**
 * insert_nodeint_at_index - insert node at a certain position
 * @head: Head pointer
 * @idx: index
 * @n: Node value
 * Return: new_node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int length;

	length = getsize(*head);
	new_node = (listint_t *)malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	if (idx > length)
	{
		return (NULL);
	}
	else
	{
		while (--idx)
		{
			ptr = ptr->next;
		}
		new_node->next = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
