#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		char *s = ptr->str;
		int len = ptr->len;
		(s != NULL) ? printf("[%d] %s\n", len, s) : printf("[0] (nil)\n");
		ptr = ptr->next;
		count++;
	}
	return (count);
}
