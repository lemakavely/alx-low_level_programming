#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array element size
 * @size: size of the pointer in bytes
 *
 * Return: pointer to the created memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
