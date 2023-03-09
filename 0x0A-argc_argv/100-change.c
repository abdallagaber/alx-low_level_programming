#include <stdio.h>
#include <stdlib.h>

/**
 * main ->
 * a program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int i, j, n;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	for (i = 0; n; i++)
	{
		for (j = 0; c[j]; j++)
		{
			if (n >= c[j])
			{
				n -= c[j];
				break;
			}
		}
	}
	printf("%d\n", i);
	return (0);
}
