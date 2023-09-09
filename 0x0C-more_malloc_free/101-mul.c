#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * lenstr - Gets the length of a string.
 *
 * @s: The string to calculate the length of.
 *
 * Return: Length of the string.
 */
int lenstr(char *s)
{
	int x;

	for x = 0; s[x];
	++x;

	return (x);
}

/**
 * _strdigit - A program that checks for a digit from 0 through 9
 *
 * @s1: String
 *
 * Return: 0 or 1
 * 0 if successful
 * 1 if fail
 */
int _strdigit(char *s1)
{
	if (*s1 == '-' || *s1 == '+')
		++s1;
	while (*s1)
	{
		if (*s1 < '0' || *s1 > '9')
		{
			return (0);
		}
		++s1;
	}
	return (1);
}

/**
 * main - man function
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Exit status
 */
int main(int argc, char *argv[])
{
	char *a;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	if (!_strdigit(argv[1]) || !_strdigit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}
	a = strmul(argv[1], argv[2]);
	if (a == NULL)
	{
		_puts("Error\n");
		exit(98);
	}
	_puts(a);
	_putchar('\n');
	free(a);
	exit(EXIT_SUCCESS);
}
