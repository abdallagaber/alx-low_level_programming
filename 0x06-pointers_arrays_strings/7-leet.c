#include "main.h"

/**
 * leet -> a function that encodes a string into 1337.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: a pointer to the resulting string s.
 */

char *leet(char *s)
{
	int i, j;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; l[j]; j++)
		{
			if (s[i] == l[j])
				s[i] = e[j];
		}
	}
	return (s);
}
