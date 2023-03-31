#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer to the head node of the list.
 * @str: String to be stored in the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
