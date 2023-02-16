#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; i < (int)strlen(s); i++)
		putchar(s[i]);
	return (1);
}
