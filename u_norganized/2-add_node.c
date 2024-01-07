#include "lists.h"

/**
 * add_node - Add a new node to the beginning of a new list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated 
 *
 * Return: The address of hte new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(str);
	new_node->str = strdup(str);

	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
