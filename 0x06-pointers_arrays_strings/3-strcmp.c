#include "main.h"

/**
 * _strcmp -> a function that compares two strings.
 *
 * @s1: s1 is a pointer to char parameter
 * @s2: s2 is a pointer to char parameter
 *
 * Return:
 * -> positive: s1 ascii value higher than s2.
 * -> negative:	s1 ascii value less than s2.
 * -> (0): s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	return (res);
}
