#include <stdlib.h>
/** print_name - To print the name of a string
 * @name: This is the string parameter
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
