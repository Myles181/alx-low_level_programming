#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 *
 * Return: If succesful return my_dog, Else return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	if (!my_dog)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;

	return (my_dog);
}
