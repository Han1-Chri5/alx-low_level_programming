#include <stdio.h>
/**
 * main - main block
 * Prints all single digit numbers of base 10 from 0
 * Does not use any variable of type char
 * Uses putchar function only twice
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
