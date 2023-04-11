#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid prev created by alloc_grid function
 * @grid: grid created by alloc_grid
 * @height: @grid height
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

