#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 *
 * @str: input string that is to be printed
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int tally = 0;

	while (tally >= 0)
	{
		if (str[tally] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (tally % 2 == 0)
			_putchar(str[tally]);
		tally++;
	}
}
