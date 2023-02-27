#include "main.h"
#include <stdio.h>

/**
 * print_array -> a function that prints n elements of an array of integers.
 *
 * @a: a is a pointer to interger parameter
 * @n: n is an integer argument
 *
 * Return: void (no return)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
