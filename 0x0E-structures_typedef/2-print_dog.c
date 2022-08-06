#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry point
 * @d: First param
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("%s\n", d->name);

		printf("%f\n", (*d).age);

		if (d->owner != NULL)
			printf("%s\n", d->owner);
	}
}
