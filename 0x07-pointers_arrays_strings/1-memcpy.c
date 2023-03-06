#include "main.h"

/**
 * _memcpy -> a function that copies memory area.
 *
 * @dest: dest is a pointer to char parameter.
 * @src: src is a pointer to char parameter.
 * @n: n is an unsigend integer argument.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
		dest[i] = src[i];
	return (dest);
}
