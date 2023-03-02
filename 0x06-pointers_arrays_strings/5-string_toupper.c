#include "main.h"

/**
 * string_toupper ->
 * a function that changes all lowercase letters of a string to uppercase.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: a pointer to the resulting string s.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && i <= 'z')
			s[i] -= 32;
	}
	return (s);
}
