#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s:First param
 * @c:Second param
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c);
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (NULL);

	return (0);

}
