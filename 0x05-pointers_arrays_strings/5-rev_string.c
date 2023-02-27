#include "main.h"

/**
 * rev_string -> a function that reverses a string.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: void (no return)
 */

void rev_string(char *s)
{
	int i, count = 0;
	char temp[99];

	for (i = 0; *(s + i) != 0; i++)
		count++;
	
	count--;
	for (i = count; i >= 0; i--)
		temp[count - i] = *(s + i);
	for (i = 0; i <= count; i++)
		*(s + i) = temp[i];
}
