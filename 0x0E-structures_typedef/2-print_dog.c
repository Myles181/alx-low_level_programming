#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry point
 * @d: First param
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("NULL");

	if (d->name == NULL || d->owner == NULL)
		printf("(nil)");

	else if (d->name != NULL)
			printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
	
}
