#include "main.h"

/**
 * is_prime_number ->
 * a function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: n is an integer argument.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	return(_prime(2, n));
}

/**
 * _prime ->
 * a function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @i: i is an integer argument.
 * @n: n is an integer argument.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int _prime(int i, int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (i == n - 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (1 * _prime(i + 1, n));
}
