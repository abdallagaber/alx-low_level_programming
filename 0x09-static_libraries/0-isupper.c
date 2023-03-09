#include "main.h"

/**
 * _isupper -> a function that checks for uppercase character.
 *
 * @c: c is an integer argument
 *
 * Return:
 * -> 1 if c is uppercase
 * -> 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
