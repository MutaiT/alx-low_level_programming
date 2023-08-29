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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
			s++;
	}
	return (NULL);
}
