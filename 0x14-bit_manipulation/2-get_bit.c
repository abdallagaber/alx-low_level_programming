#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The unsigned long integer to extract the bit from
 * @index: The index of the bit to extract, starting from 0
 *
 * Return: The value of the bit at index 'index', or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
