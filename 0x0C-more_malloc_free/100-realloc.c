#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocates memory for an array
 * @ptr: pointer to previously allocated memory
 * @old_size: ptr allocated size in bytes
 * @new_size: new pointer size in bytes
 *
 * Return: pointer to the created memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *ptr0 = ptr;
	unsigned int i = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size || ptr == NULL)
		return (p);
	if (new_size == old_size)
		return (ptr);
	for (i = 0; i < new_size && i < old_size; i++)
		*(p + i) = *(ptr0 + i);
	free(ptr);
	return (p);
}
