#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @n: number of bytes to fill
 * @s: memory area
 * @b: constant byte
 *
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
