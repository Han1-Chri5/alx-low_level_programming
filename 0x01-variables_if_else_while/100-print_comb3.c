#include <stdio.h>
/**
 * main - main block
 * Prints all possible combinations of two digits
 * Numbers are separated by commas and a space
 * 01 and 10 are considered as the same combination of the two digits
 * Prints only the smallest combination of two digits
 * Numbers are printed in ascending order with two digits
 * Uses putchar function only five times
 * Does not use variable of type char
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
