#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Memory allocated previously
 * @old_size: Space allocated for ptr
 * @new_size: New memory block size
 *
 * Return: Pointer to the new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *a;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
		{
			free(a);
			return (NULL);
		}
		return (a);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
