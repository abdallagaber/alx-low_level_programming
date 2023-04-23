#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number
 *             to another.
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 *
 * Return: The number of bits that must be flipped to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
