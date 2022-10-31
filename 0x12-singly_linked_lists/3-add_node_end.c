#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new nodes at the end of a list_t list
 * @head: pointer to a pointer to first node
 * @str: string
 *
 * Return: temp node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	ptr = *head;
	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	return (new_node);
}
