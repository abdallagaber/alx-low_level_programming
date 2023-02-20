#include "main.h"

/**
 * times_table -> a function that prints the 9 times table, starting with 0.
 *
 * Return: void(no return)
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			res = i * j;
			_putchar(',');
			_putchar(' ');
			(res / 10) ? _putchar('0' + res / 10) : _putchar(' ');
			_putchar('0' + res % 10);
		}
		_putchar('\n');
	}
}
