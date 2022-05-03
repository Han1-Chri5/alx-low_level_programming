#include "main.h"

/**
 * _strpbrk - locates first char in string s
 * @s: input string to search for matching char
 * @accept: string containing matching char to be found
 * Return: pointer to matching char in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}
