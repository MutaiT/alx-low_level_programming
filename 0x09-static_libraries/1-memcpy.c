#include "main.h"

/**
 * _memcpy - A function that copies memory area
 *
 * @dest: Destination memory area
 *
 * @src: Source memory area
 *
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
