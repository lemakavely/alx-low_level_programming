#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dogs allocated memory
 * @d: pointer to free
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
