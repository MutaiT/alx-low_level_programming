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
	 char leetMap[5][2] = {
		{'a', '4'}
		{'e', '3'}
		{'o', '0'}
		{'t', '7'}
		{'l', '1'}
	}

	for (int x = 0; seq[x] != '\0'; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			if (seq[x] == leetMap[y][0] || seq[x] == (leetMap[y][0] - 32))
			{
				str[seq] = leetMap[y][x];
				break;
			}
		}
	}
	return (seq);
}
