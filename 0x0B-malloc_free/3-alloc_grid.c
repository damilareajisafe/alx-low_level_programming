#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initialize a grid of width - @width and height -@height to 0
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2d array of integers or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		p[i] = malloc(width * sizeof(int));
	if (width == 0 || height == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
