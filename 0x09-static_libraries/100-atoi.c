#include "main.h"

/**
 * _atoi - A function that converts a string to a number
 *
 * @s: Infinite number of characters
 *
 * Return: Anything
 */
int _atoi(char *s)
{
	unsigned int tally = 0, extent = 0, w = 0, x = 1, y = 1, z;

	while (*(s + tally) != '\0')
	{
		if (extent > 0 && (*(s + tally) < '0' || *(s + tally) > '9'))
			break;

		if (*(s + tally) == '-')
			x *= -1;

		if ((*(s + tally) >= '0') && (*(s + tally) <= '9'))
		{
			if (extent > 0)
				y *= 10;
			extent++;
		}
		tally++;
	}

	for (z = tally - extent; z < tally; z++)
	{
		w = w + ((*(s + z) - 48) * y);
		y /= 10;
	}
	return (w * x);
}
