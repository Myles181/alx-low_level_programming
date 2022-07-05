#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: skip letters q and e in alphabets
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	return (0);
}
