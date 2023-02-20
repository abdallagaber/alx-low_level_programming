#include "main.h"

/**
 * print_alphabet ->
 * a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void (no return)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
