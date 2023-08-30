#include "main.h"

/**
 * _lenstr - Function that returns the length of a string
 *
 * @s: string
 *
 * Return: Length of a string
 */
int _lenstr(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _lenstr(s + 1));
}

/**
 * _checker - checks each character of the string
 *
 * @s: String to be checked
 * @x1: Smallest iterator
 * @x2: Largest iterator
 *
 * Return: 0 Great
 */
int _checker(char *s, int x1, int x2)
{
	if (*(s + x1) == *(s + x2))
	{
		if (x1 == x2 || x1 == x2 + 1)
			return (1);
		return (0 + _checker(s, x1 + 1, x2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_checker(s, 0, _lenstr(s) - 1));
}
