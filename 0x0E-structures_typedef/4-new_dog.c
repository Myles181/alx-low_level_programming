#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return NULL;
	}

	if (!my_dog)
	{
		free(my_dog);
	}
	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;

	return (my_dog);
}
