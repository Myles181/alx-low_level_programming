#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Using putchar
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
