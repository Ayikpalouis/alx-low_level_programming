#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creats a 2d array
 * @width: size of column of grid
 * @height: size of row of grid
 *
 * Return: NULL on failure, NULL is width or height is 0 or negative,
 * or a pointer to 2d array if no error.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
