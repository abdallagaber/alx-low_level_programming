#include "main.h"

/**
 * _strdup -> a fun that returns a pointer to a newly allocated space in memory
 * ,which contains a copy of the string given as a parameter.
 *
 * @str: str is a pointer to char parameter
 *
 * Return: a pointer to the duplicated string,
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strcp;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	strcp = malloc(sizeof(char) * (i + 1));

	if (strcp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strcp[i] = str[i];

	return (strcp);
}
