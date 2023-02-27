#include "main.h"

/**
 * swap_int -> a function that swaps the values of two integers.
 *
 * @a: a is a pointer to interger parameter
 * @b: b is a pointer to interger parameter
 *
 * Return: void (no return)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
