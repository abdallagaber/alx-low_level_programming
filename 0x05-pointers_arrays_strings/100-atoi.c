#include "main.h"

/**
 * _atoi -> a function that convert a string to an integer.
 *
 * @s: s is a pointer to char parameter.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int i, seg = 1, res = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			seg *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res += (s[i] - '0');
		}
		else if (res > 0)
			break;
	}
	return (seg * res);
}
