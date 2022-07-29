#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: starting number
 * @max: ending number
 *
 * Return: pointer to the created memory or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, j = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		ptr[j] = min + j;
	return (ptr);
}
