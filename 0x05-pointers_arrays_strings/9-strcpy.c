#include "main.h"

/**
 * _strcpy -> a function that copies the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @dest: dest is a pointer to interger parameter
 * @src: src is a pointer to interger parameter
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; *(src + i) != 0; i++)
		count++;
	for (i = 0; i < count; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
