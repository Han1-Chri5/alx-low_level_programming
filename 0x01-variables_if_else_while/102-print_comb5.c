#include <stdio.h>
/**
 * main - main block
 * Prints all possible combinations of two two-digit numbers
 * Numbers range from 0 to 99
 * The two numbers are separated by a space
 * Numbers are printed with two digits
 * 1 is printed as 01
 * Combination of numbers are separated by commas and a space
 * Combinations of numbers are printed in ascending order
 * `00 01` and `01 00` are considered as the same combination
 * Uses putchar function only eight times
 * Does not use variable of type char
 * Return: 0
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
