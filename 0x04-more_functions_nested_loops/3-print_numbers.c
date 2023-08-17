#include "main.h"

/**
 * print_numbers - prints integers
 *
 * Return: 0
 *
 */

void print_numbers(void)
{
	char x = 0;

	while (x <= 9)
	{
		_putchar('0' + x);
		x++;
	}

	_putchar('\n');

}
