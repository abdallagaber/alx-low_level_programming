#include "main.h"

/**
 * reverse_array -> function that reverses the content of an array of integers.
 *
 * @a: a is a pointer to char parameter
 * @n: n is the number of elements of the array
 *
 * Return: void (no return)
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
