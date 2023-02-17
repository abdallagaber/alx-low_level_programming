#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 49, b = 48;

	for (; b < 57; b++)
	{
		for (; a <= 57; a++)
		{
			putchar(b);
			putchar(a);
			if (a == 57 && b == 56)
				continue;
			putchar(',');
			putchar(' ');
		}
		a = b + 2;
	}
	putchar('\n');
	return (0);
}
