#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a duplicate string
 * @str: string duplicated by _strdup
 * Return: Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		s[c] = str[c];
	s[c] = '\0';

	return (s);
}
