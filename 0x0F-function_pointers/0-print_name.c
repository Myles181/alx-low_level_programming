#include <stdlib.h>
/**
 * print_name - To print the name of a string
 * @name: This is the string parameter
 * @f: Function pointer
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*(name)) != '\0')
		(*f)(name);
}
