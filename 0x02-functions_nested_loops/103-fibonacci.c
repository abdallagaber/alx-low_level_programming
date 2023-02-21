#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0, b = 1, sum = 0, c;

	while (1)
	{
		c = a + b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
		if (c > 4000000)
			break;
	}
	printf("%d\n", sum);
	return (0);
}
