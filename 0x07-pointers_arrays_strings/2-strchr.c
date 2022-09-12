#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s:First param
 * @c:Second param
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (s);

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	return (NULL);
}
