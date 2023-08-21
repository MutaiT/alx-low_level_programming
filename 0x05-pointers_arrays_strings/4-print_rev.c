#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 *
 * @s: input string to be printed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int tally = 0;

	while (tally >= 0)
	{
		if (s[tally] == '\0')
		{
			break;
		}
		tally++;
	}

	for (tally--; tally >= 0; tally--)
	{
		_putchar(s[tally]);
	}
	_putchar('\n');
}
