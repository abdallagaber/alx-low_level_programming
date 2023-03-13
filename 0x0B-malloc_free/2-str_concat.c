#include "main.h"

/**
 * str_concat -> a function that concatenates two strings.
 *
 * @s1: s1 is a pointer to char parameter.
 * @s2: s2 is a pointer to char parameter.
 *
 * Return: a pointer to new string or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *strc;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	strc = malloc(sizeof(char) * (i + j + 1));

	if (strc == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		strc[k] = s1[k];
	for (i = 0; i < j; k++, i++)
		strc[k] = s2[i];

	return (strc);
}
