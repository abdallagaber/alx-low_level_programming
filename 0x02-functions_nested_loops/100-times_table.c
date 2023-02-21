#include "main.h"

/**
 * print_times_table -> function that prints the n times table,starting with 0.
 *
 * @n: n is an integer argument
 *
 * Return: void (no return)
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				res = i * j;
				_putchar(',');
				_putchar(' ');
				(res > 99) ? _putchar('0' + res / 100) : _putchar(' ');
				(res > 9) ? _putchar('0' + res / 10 % 10) : _putchar(' ');
				_putchar('0' + res % 10);
			}
			_putchar('\n');
		}
	}
}
