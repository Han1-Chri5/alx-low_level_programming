#include <stdio.h>

/**
 * main - main block
 * Prints single digit numbers of base 10 from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
