#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Using putchar
 *
 * Return: Always 0 for succes
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
