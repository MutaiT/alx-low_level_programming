#include "main.h"
#include <stdio.h>

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte(\0),
 * to the buffer pointed to by dest.
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int tally = 0;

	while (tally >= 0)
	{
		*(dest + tally) = *(src + tally);
		if (*(src + tally) == '\0')
			break;
		tally++;
	}
	return (dest);
}
