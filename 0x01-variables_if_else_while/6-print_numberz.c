#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0 to 9 using putchar and no char description
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
