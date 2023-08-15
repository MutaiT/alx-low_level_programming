#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times in lowercase
 * Retutn: void
 */
void print_alphabet_x10(void)
{
	char x;
	int y = 0;

	while (y < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(h);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
