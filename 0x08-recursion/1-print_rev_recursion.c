#include "main.h"

/**
 * _print_rev_recursion -> a function that prints a string in reverse.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: void (no return)
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == 0)
		_putchar('\0');
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
