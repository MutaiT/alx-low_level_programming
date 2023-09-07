#include "main.h"
#include <stdlib.h>

/**
 * array_range - Craetes an array of integers
 *
 * @min: Smallest element
 * @max: Largest element
 *
 * Return: Pointer to the created array
 */
int *array_range(int min, int max)
{
	int *a, s, i;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	a = malloc(sizeof(int) * s);
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		a[i] = min;
	return (a);
}
