#include <stdio.h>

/**
 * main - Prints the name of the file program is compiled from
 * Return: 0;
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}