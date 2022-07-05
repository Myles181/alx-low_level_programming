#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lower case numbers of base 16 with putchar
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char ch = 0;
	char ch1 = 'a';

	while (ch < 10)
{
	putchar(ch);
	ch++;
}
	while (ch1 < 'g')
{
		putchar(ch1);
		ch1++;
}
	putchar('\n');

	return (0);
}
