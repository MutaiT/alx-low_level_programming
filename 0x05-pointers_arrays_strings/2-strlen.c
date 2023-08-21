#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: input string
 *
 * Return: length of the string input
 */
int _strlen(char *s)
{
	int tally = 0;

	while (*(s + tally) != '\0')
	{
		tally++;
	}

	return (tally);
}
