#include <stdio.h>
/**
 * main - main block
 * Prints all possible combinations of single-digit numbers
 * Numbers are separated by commas and a space
 * Does not use variable of type char
 * Uses putchar function only four times
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
