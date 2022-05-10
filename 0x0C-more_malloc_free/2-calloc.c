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
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
