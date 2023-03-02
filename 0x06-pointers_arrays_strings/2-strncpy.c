#include "main.h"

/**
 * _strncpy -> a function that copies a string.
 *
 * @dest: dest is a pointer to char parameter
 * @src: src is a pointer to char parameter
 * @n: n is an integer argument
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
