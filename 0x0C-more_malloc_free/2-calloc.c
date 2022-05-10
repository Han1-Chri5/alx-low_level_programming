#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory (SUCCESS),
 * Else, NULL (FAILURE)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');

	p = malloc(nmemb * size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return ((void *)p);
}
