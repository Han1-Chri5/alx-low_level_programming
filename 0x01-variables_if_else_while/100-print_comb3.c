#include <stdio.h>
/**
 * main - main block
 * Prints numbers from 0 to 99.
 * Numbers are separated by commas and a space
 * Does not use variable of type char
 * Uses putchar function only five times
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i % 10;

		putchar(j + '0');
		putchar(k + '0');

		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
