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
	struct dog new_dog1;
	dog_t *new_dog0 = &new_dog1;

	new_dog0 = malloc(strlen(name) + strlen(owner) + sizeof(float));
	if (new_dog0 == NULL)
		return (NULL);
	new_dog0->name = name;
	new_dog0->age = age;
	new_dog0->owner = owner;
	return (new_dog0);
}
