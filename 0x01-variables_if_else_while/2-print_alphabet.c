#include <stdio.h>
/**
 * main - main block
 * Prints the alphabet in lowercase using putchar function
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
