#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The number of parameters that go into main
 * @argv: Array of pointers containing strings going into main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
