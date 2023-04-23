#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the unsigned long integer to modify
 * @index: The index of the bit to set, starting from 0
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
