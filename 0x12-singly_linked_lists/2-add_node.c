#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node
 * @head: The head node
 * @str: The string to be printed
 * Return: temp
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t **ptr;
	list_t ***temp;

	ptr = (list_t**)malloc(sizeof(list_t));

	ptr = head;
	temp = &head;
	temp->str = strdup(str);
	temp->next = NULL;

	while (ptr->str != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	(**ptr).next = temp;
	return (temp);
}
