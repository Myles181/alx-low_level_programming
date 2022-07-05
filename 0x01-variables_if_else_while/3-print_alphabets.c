#include <stdio.h>
/**
 * main - Entry main
 *
 * Description: Use of putchar print lower_case and upper_case
 *
 * Return: Always 0 for success
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
