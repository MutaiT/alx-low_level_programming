#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string
 * @s: The string that is to be searched
 * @c: The character to be found
 * Return: A pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	/* check whole string */
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	{
		/* check for match */
		if (s[x] == c)
		{
			/* return address if match */
			return (s + x);
		}
		x++;
	}
	if (c == '\0')
		return (s + x);
	return (NULL);
}
