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

	if (size == 0)
		return (NULL);
	arr = malloc(size);
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	return (arr);
}
