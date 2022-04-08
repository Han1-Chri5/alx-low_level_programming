#include <stdio.h>

/**
 * main - main block
 * Prints numbers between 00 to 99
 * Numbers are separated by commas and a space
 * Uses putchar function only five times
 * Does not use variable of type char
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(j);
			putchar(i);
			if (i == 57 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
