#include "lists.h"

/**
 * list_len - finds the number of elements in a list_t list
 * @h: head of the linked list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	list_t *node;
	size_t size = 0;

	if (h == NULL)
		return (0);

	if (h->next != NULL)
		size++;
	else
		return (1);

	node = h->next;

	for (; node != NULL; size++, node = node->next)
		continue;

	return (size);
}
