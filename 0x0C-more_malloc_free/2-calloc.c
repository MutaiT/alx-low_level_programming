#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(nmemb * size);
	if (z == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		z[x] = 0;
	return (z);
}
