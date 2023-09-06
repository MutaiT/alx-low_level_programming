#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-Dimensional array
 *
 * @width: Columns
 * @height: Rows
 *
 * Return: Pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **array, z, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (z = 0; z < height; z++)
	{
		array[z] = malloc(sizeof(int) * width);
		if (array[z] == NULL)
		{
			for (--z; z >= 0; z--)
				free(array[z]);
			free(array);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			array[z][y] = 0;
	}
	return (array);
}
