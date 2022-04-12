#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: int type number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
	{
		j = -1 * (n % 10);
		_putchar(j + '0');
		return (j);
	}
	else
	{
		j = n % 10;
		_putchar(j + '0');
		return (j);
	}
}
