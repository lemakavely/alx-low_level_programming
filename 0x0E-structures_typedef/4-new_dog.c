#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: none
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	dog_t *new_dog0;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog0 = malloc(sizeof(dog_t));
	if (new_dog0 == NULL)
		return (NULL);
	i = strlen(name);
	j = strlen(owner);
	new_dog0->name = malloc(i + 1);
	if (new_dog0->name == NULL)
	{
		free(new_dog0);
		return (NULL);
	}
	for (k = 0; k < i + 1; k++)
		new_dog0->name[k] = name[k];
	new_dog0->age = age;
	new_dog0->owner = malloc(j + 1);
	if (new_dog0->owner == NULL)
	{
		free(new_dog0->name);
		free(new_dog0);
		return (NULL);
	}
	for (l = 0; l < j + 1; l++)
		new_dog0->owner[l] = owner[l];
	return (new_dog0);
}
