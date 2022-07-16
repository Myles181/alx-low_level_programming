#include "main.h"
#include <string.h>
/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);
	for (; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		
	}
}
