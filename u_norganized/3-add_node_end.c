#include "lists.h"

/**
 * add_node_end - Add a new node to the end of the list.
 * @head: double pointer to the current head of the list.
 * @str: string to be duplicated
 *
 * Return: address of new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	node = *head;

	for (; node->next != NULL; node = node->next)
		;

	node->next = new;
	return (new);
}
