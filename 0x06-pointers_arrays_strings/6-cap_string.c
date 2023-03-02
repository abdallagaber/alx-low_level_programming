#include "main.h"

/**
 * cap_string -> a function that capitalizes all words of a string.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: a pointer to the resulting string s.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				 || s[i] == ';' || s[i] == '.' || s[i] == '!'
				 || s[i] == '?' || s[i] == '"' || s[i] == '('
				 || s[i] == ')' || s[i] == '{' || s[i] == '}')
				 && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
	}
	return (s);
}
