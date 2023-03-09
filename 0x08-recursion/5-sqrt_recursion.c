#include "main.h"

/**
* _sqrt_recursion -> function that returns the natural square root of a number.
*
* @n: n is an integer argument.
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}

/**
 * _sqrt -> returns the square root of a number
 *
 * @l: l is an integer argument
 * @n: n is an integer argument
 *
 * Return: the square root of n
 */

int _sqrt(int l, int n)
{
	if (n < 0)
		return (-1);
	else if (l * l > n)
		return (-1);
	else if (l * l == n)
		return (l);
	else
		return (_sqrt(l + 1, n));
}
