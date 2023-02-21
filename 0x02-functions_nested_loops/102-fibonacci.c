#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int a = 0, b = 1, c, i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%lld, ", c);
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
