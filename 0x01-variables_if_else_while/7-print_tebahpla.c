#include <stdio.h>

/**
 * main - main block
 * Prints the lowercase alphabet in reverse
 * Uses putchar function only twice
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
