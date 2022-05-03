#include "main.h"

/**
 * _memset - fills n bytes with constant byte b
 * @s: input pointer
 * @b: constant char type
 * @n: number of byters
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
