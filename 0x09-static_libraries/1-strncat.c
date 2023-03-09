#include "main.h"

/**
 * _strncat -> a function that concatenates two strings.
 *
 * @dest: dest is a pointer to char parameter
 * @src: src is a pointer to char parameter
 * @n: n is an integer argument
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i]; i++)
		;
	for (; j < n && src[j]; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
