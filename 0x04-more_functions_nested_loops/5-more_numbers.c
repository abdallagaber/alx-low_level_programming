#include "main.h"

/**
 * more_numbers -> a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void (no return)
 */

void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
