#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the struct dog
 * @d: pointer to the struct
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else 
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
