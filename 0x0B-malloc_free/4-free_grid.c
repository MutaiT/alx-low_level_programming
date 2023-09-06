#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated by alloc_grid
 *
 * @grid: The array
 * @height: The array's height
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
