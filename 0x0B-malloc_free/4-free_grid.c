#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-alloc_grid.c"

/**
 * free_grid - frees a grid of int
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: pointer to the array or null
 */

void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
}
