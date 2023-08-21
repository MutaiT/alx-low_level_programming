#include "main.h"

/**
 * rev_string - A function that reverses a string
 *
 * @s: input string to be printed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int tally = 0, x, y;
	char *str, temp;

	while (tally >= 0)
	{
		if (s[tally] == '\0')
			break;
		tally++;
	}
	str = s;

	for (x = 0; x < (tally - 1); x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			temp = *(str + y);
			*(str + y) = *(str + (y - 1));
			*(str + (y - 1)) = temp;
		}
	}
}
