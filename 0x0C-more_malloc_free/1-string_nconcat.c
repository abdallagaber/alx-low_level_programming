#include "main.h"

/**
 * string_nconcat -> a function that concatenates two strings.
 *
 * @s1: s1 is a pointer to char parameter.
 * @s2: s2 is a pointer to char parameter.
 * @n: n is an integer unsigned argument.
 *
 * Return: a pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);
	
	for (i = 0; s1[i]; i++)
		string[i] = s1[i];
	for (j = 0; s2[j] && (j < n); i++, j++)
		string[i] = s2[j];

	string[i] = '\0';

	return (string);
}
