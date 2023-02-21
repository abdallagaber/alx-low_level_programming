#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double a = 0, b = 1, c, i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%.0lf, ", c);
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
