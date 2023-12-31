#include "main.h"

/**
 * _puts_recursion - A function that prints a string followed ny a new line
 *
 *@s: String to be printed
 *
 * Return: No return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
