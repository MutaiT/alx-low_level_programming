#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - Frees a 2-Dimensional array
 *
 * @grid: Multidimentional array
 * @height: Array's height
 *
 * Return: no value
 */
void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Splits a string into words
 *
 * @str: string
 *
 * Return: Pointer to the array
 */
char **strtow(char *str)
{
	char **array;
	unsigned int c, height, i, y, z;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	array = malloc((height + 1) * sizeof(char *));
	if (array == NULL || height == 0)
	{
		free(array);
		return (NULL);
	}
	for (i = z = 0; i < height; i++)
	{
		for (c = z; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				z++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				array[i] = malloc((c - z + 2) * sizeof(char));
				if (array[i] == NULL)
				{
					_free_grid(array, i);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; z <= c; z++, y++)
			array[i][y] = str[z];
		array[i][y] = '\0';
	}
	array[i] = NULL;
	return (array);
}
