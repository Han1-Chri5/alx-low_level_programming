#include "main.h"
/**
 * _islower - returns 1 if letter is lowercase and 0 if not.
 * @c: char type to check in ASCII code
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
