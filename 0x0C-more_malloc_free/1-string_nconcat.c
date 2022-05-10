#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of string 2
 * Return: Pointer to newly allocated memory (SUCCESS),
 * Else, NULL (FAILURE)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0, j = 0;
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;

	if (j > n)
		j = n;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == 0)
		return (0);

	for (k = 0; k < i; k++)
		*(s + k) = *(s1 + k);

	for (k = 0, l = i; k < j; l++, k++)
		*(s + l) = *(s2 + k);

	*(s + l) = '\0';

	return (s);
}
