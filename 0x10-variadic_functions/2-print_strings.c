#include "variadic_functions.h"

/**
 * print_strings - prints a given number of strings
 *                 separated by a given separator
 *
 * @separator: the separator string used to separate the strings
 * @n: the number of strings to print
 * @...: the list of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		(s != NULL) ? printf("%s", s) : printf("(nil)");
		if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
