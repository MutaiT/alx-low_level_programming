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
	char *ptr = seq;
	char rotMap[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; *ptr != '\0'; ptr++)
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = rotMap[*ptr - ((*ptr >= 'A' && *ptr <= 'Z') ? 'A' : 'a')];
		}
	}

	return (seq);
}
