#include "main.h"
/**
 * _puts - A function that prints a string followed by a new line
 *
 * @str: input string to be printed
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int tally = 0;

	while (tally >= 0)
	{
		if (str[tally] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[tally]);
		tally++;
	}
}
