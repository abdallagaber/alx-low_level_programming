#include "main.h"

/**
 * array_range -> a function that creates an array of integers.
 *
 * @min: min is an integer argument.
 * @max: max is an integer argument.
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0, size = max - min;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (size + 1));

	for (i = min; i <= max; i++, j++)
		arr[j] = i;

	return (arr);
}
