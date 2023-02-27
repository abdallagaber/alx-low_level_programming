#include "main.h"

/**
 * puts_half -> a function that prints half of a string.
 *
 * @str: str is a pointer to char parameter.
 *
 * Return: void (no return)
 */

void puts_half(char *str)
{
	int i, count = 0;

	for (i = 0; *(str + i) != 0; i++)
		count++;
	for (i = (count - 1) / 2 + 1; *(str + i) != 0; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
