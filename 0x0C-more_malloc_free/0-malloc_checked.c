#include "main.h"

/**
 * malloc_checked -> a function that allocates memory using malloc.
 *
 * @b: b is an integer unsigned argument.
 *
 * Return: void (no return)
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	
	return (p);
}
