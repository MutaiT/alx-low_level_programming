#include "main.h"

/**
 * puts_half - A function that prints half of a string
 *
 * @str: input string to be printed
 *
 * Return: 0 Great
 */
void puts_half(char *str)
{
	int tally = 0, x;

	while (tally >= 0)
	{
		if (str[tally] == '\0')
			break;
		tally++;
	}

	if (tally % 2 == 1)
		x = tally / 2;
	else
		x = (tally - 1) / 2;

	for (x++; x < tally; x++)
		_putchar(str[x]);
	_putchar('\n');
}
