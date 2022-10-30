#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - write a function that frees dog
 * @d: parameter
 *
 * Return: Nothing
*/

void free_dog(dog_t *d)
{
	free(d);
}
