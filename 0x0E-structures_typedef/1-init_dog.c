#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialise a structure(dog)
 * @d: pointer to element
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

