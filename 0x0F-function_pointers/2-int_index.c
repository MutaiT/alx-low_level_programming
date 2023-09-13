#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches an integer
 *
 * @array: Pointer
 * @size: Number of elements in array
 * @cmp: Pointer to a function
 *
 * Return: -1 or 0 GREAT
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
	if (cmp(array[x]))
		return (x);
	}

	return (-1);
}
