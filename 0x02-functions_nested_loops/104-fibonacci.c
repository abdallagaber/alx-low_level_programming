#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double a = 0, b = 1, c, i;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		(i == 97) ? printf("%.f", c) : printf("%.f, ", c);
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
