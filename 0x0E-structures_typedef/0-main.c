#include "dog.h"
#include <stdio.h>

/**
 * main - code
 *
 * Return: Always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";

	printf("Name of dog: %s\nAge of dog: %.1f\nDog owner: %s\n", my_dog.name, my_dog.age, my_dog.owner);

	return (0);
}
