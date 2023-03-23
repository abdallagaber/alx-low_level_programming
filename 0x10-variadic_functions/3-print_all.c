#include "variadic_functions.h"

/**
 * print_all - prints any combination of ints, floats, chars, and strings
 *
 * @format: a string containing the format specifiers for each argument
 *          'c' for char, 'i' for int, 'f' for float, 's' for char *
 *
 * @...: the list of arguments to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
