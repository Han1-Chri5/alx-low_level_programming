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
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
