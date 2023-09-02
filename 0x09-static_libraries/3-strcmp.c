#include "main.h"

/**
 *_strcmp - A function that compares two strings
 *
 *@s1: The first string
 *
 *@s2: The second string
 *
 * Return: 0 if equal,Negative if s1 < s2,Positive s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
