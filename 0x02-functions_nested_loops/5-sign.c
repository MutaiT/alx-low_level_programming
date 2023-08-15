#include "main.h"

/**
 * print_sign - States whether a number is positive or negative
 * @n : Ascertains the status of n
 * Return: 1 or 0 if negative or positive
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
