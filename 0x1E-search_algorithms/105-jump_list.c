#include "search_algos.h"

/**
 * jump_list - Searches for value in a singly linked list
 * using Jump Search algorithm
 * @list: A pointer to the head node
 * @size: The size of the linked list
 * @value: Value to search for
 * Return: pointer to node or NULL for failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t pos;
	listint_t *low, *high;

	if (list == NULL && size > 0)
		return (NULL);

	high = low = list;
	pos = sqrt(size);
	while (high->next != NULL && high->n < value)
	{
		low = high;
		pos += sqrt(size);
		while (high->index < pos && high->next != NULL)
			high = high->next;
		printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		       low->index, high->index);
	while ((low != NULL) && (low->index < size) && (low->index <= high->index))
	{
		printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
		if (low->n == value)
		{
			return (low);
		}
		low = low->next;
	}
	return (NULL);
}
