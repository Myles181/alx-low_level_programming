#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print linkd lists
 * @h: pointer parameter
 * Return: counter(i)
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *ptr;

	ptr = h;
	if (h == NULL)
		exit(EXIT_FAILURE);

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		i++;
	}
	return (i);
}
