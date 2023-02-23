#include "main.h"

/**
 * print_triangle -> a function that prints a triangle
 *
 * @size: size is an integer argument
 *
 * Return: void (no return)
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
