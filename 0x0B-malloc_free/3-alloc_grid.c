#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - prints a grid of int
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the array or null
 */

int **alloc_grid(int width, int height)
{
	int **arr = (int **)malloc(height * sizeof(int *));
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
