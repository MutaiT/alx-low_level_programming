#include "main.h"

/**
 *cap_string - A function that capitalises all  words of a string
 *
 *@seq: String to be modified
 *
 *Return: Modified string
 */
char *cap_string(char *seq)
{
	int x, y, Asc;

	char Separators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', ' ', '\n'};

	if (seq[0] > 96 && seq[0] < 123)
		seq[0] -= 32;

	while (seq[x] != '\0')
	{
		if (seq[x] > 96 && seq[x] < 123)
		{
			y = 0;
			Asc = 0;
		}

	}
	while (Asc == 0 && y < 13)
	{
		if (seq[x - 1] == Separators[y])
		{
			Asc = 1;
		}
		y++;
	}
	if (Asc == 1)
	{
		seq[x] -= 32;
	}
		x++;

	return (seq);
}
