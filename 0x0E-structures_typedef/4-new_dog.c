#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	len_name = len_owner = 0;
	while (name[len_name++])
		;
	while (owner[len_owner++])
		;
	d1->name = malloc(len_name * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(len_owner * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
		d1->owner[i] = owner[i];
	return (d1);
}


