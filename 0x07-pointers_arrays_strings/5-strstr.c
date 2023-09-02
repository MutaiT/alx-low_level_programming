#include "main.h"

/**
 * _strstr - Returns pointer to first character of matching substring
 *
 * @y: String to find its substring
 * @x: Substring to find its match
 *
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *y, char *x)
{
	int i;

	while (*y != '\0')
	{
		i = 0;

		while (*y == *x && *y != '\0' && *x != '\0')
			y++, x++, i++;

		if (*x == '\0')
			return (y - i);
		y -= (i - 1), x -= i;
	}
	return ('\0');
}
