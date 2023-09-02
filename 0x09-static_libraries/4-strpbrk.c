#include "main.h"

/**
 * _strpbrk - Finds matching character in a string
 *
 * @s: Input string
 * @x: Characters that match
 *
 * Return: Pointer to matching characters
 */

char *_strpbrk(char *s, char *x)
{
	unsigned int i, y;

	for (i = 0; s[i] != '\0'; i++)
		for (y = 0; x[y] != '\0'; y++)
			if (s[i] == x[y])
				goto exit;

exit: return (s[i] != '\0' ? s + i : '\0');
}
