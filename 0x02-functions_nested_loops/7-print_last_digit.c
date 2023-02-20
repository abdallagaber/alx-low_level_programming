#include "main.h"

/**
 * print_last_digit -> a function that prints the last digit of a number.
 *
 * @n: n is an integer argument.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n /= -1;
	_putchar('0' + n);
	return (n);
}
