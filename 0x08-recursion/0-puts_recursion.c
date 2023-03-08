#include "main.h"

/**
 * _puts_recursion ->  a function that prints a string.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: void (no return)
 */

void _puts_recursion(char *s)
{
	if (s[0] == 0)
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
}
