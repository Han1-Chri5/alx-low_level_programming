#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * _FILE_ - expands to the name of the current input file
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
