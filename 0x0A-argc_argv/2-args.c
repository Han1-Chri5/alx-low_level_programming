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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
