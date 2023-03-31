#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 *
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
