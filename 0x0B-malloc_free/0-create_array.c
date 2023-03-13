#include "main.h"

/**
 * create_array -> a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size is an unsigned integer argument
 * @c: c is a char argument
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
