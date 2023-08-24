#include "main.h"

/**
 * print_number - A function that prints an integer
 *
 * @n: integer that is to be printed
 *
 * Return: 0 Great
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
