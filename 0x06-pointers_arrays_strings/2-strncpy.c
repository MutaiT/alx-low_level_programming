#include "main.h"

/**
 *_strncpy - A function that copies a string
 *
 *@dest: Destination array where the string will be copied
 *
 *@src: Source string to be copied
 *
 *@n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination array
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
