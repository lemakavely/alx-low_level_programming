#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of charts
 * @size: array size
 * @c: character to fill the array with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
