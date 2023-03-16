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
	int i, size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = i + min;

	return (arr);
}
