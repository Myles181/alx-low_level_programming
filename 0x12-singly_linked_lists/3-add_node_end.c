#include <stdlib.h>
#include <stddef.h>
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
	size_t i = 0;
	list_t *new_node, *temp;

	while (str[i] != '\0')
		i++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);

	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	} else
	{
		temp->next = NULL;
		new_node = *head;
		while (new_node->next != NULL)
			new_node = new_node->next;

		new_node->next = temp;
	}

	return (temp);
}
