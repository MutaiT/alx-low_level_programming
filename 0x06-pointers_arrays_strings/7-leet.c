#include "main.h"

/**
 *leet - A function that encodes a stirng to 1337
 *
 *@seq: String that is to be encoded
 *
 *Return: Enc string
 */
char *leet(char *seq)
{
	int x = 0, y = 0;
	char leetmap[] = {'4', '3', '1', '0', '7'};
	char leetupper[] = {'A', 'E', 'L', 'O', 'T'};
	char leetlower[] = {'a', 'e', 'l', 'o', 't'};

	while (seq[x] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (seq[x] == leetlower[y] || seq[x] == leetupper[y])
				seq[x] = leetmap[y];
		}
		x++;
	}

	return (seq);
}
