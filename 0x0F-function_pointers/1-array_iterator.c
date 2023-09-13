#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter
 *
 * @array: Pointer array
 * @size: Size of array
 * @action: Pointer to a function
 *
 * Return: 0 SUCCESS
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (action == NULL || array == NULL || size <= 0)
		return;

	for (s = 0; s < size; s++)
		action(array[s]);
}
