#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 *
 * @head: Pointer to the pointer to the head node of the list.
 * @str: String to be stored in the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *ptr, *temp;

	if (str == NULL)
		return (NULL);
	
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	
	temp->str = strdup(str);
	while (str[len])
		len++;
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
