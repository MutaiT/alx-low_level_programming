#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Size to be allocated to the memory
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
