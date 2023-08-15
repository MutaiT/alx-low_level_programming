#include "main.h"

/**
 * print_last_digit - Output last digit
 * @n : n to check
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int jk;

	if (n < 0)
	{
		jk = -1 * (n % 10);
	}
	else
	{
		jk = n % 10;
	}
	_putchar(jk + '0');
	return (jk);
}
