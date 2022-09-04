#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize
 * @d: First param
 * @name: Second param
 * @age: Third param
 * @owner: Fourth param
 * Return: nothhing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	}
