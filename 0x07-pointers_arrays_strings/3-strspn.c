#include "main.h"

/**
 * _strspn - Gets length of a sub string
 *
 * @s: Input string
 * @x: Characters that must be included
 *
 * Return: Length of substring
 */

unsigned int _strspn(char *s, char *x)
{
	unsigned int i, y, a = 0, x = 0;

	while (x[a] != '\0')
		a++;
	for (i = 0; s[i] != '\0'; i++)
		for (y = 0; y < a; y++)
			if (s[i] == x[y])
				x++, y = a;

			else
				if (y == a - 1)
					goto exit;

exit: return (x);
}
