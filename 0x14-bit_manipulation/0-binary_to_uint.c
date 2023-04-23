#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to a string of 0's and 1's
 *
 * Return: The unsigned integer value of the binary number represented
 *         by the string, or 0 if 'b' is NULL or contains a character
 *         that is not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, base = 1;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		dec_val += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}

	return (dec_val);

}

