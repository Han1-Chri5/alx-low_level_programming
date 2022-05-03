#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The number of parameters that go into main
 * @argv: Array of pointers containing strings going main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
