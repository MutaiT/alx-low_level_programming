#include "main.h"

/**
 * rot13 - A function that encodes a string using ROT13 cipher.
 *
 * @seq: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *seq)
{
	int x, y;
	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot14[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	x = 0;
	while (seq[x] != '\0')
	{
		y = 0;
		while (rot13[y] != '\0')
		{
			if (seq[x] == rot13[y])
			{
				seq[x] = rot14[y];
				break;
			}
			y++;
		}
		x++;
	}
	return (seq);
}
