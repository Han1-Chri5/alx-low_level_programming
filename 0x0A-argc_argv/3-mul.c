#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of parameters that go into main
 * @argv: Array of pointers containing strings going into main
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
