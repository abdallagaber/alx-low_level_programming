#include "main.h"

/**
 * _strlen -> a function that returns the length of a string.
 *
 * @s: s is a pointer to char parameter.
 *
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *(s + i) != 0; i++)
		count++;
	return (count);
}
