#include "dog.h"

/**
 * init_dog - give the dog struct value
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
