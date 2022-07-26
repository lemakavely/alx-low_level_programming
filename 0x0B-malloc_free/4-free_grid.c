#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid of int
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: pointer to the array or null
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
