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
<<<<<<< HEAD

	for (ch = 'a'; ch <= 'z'; ch++)
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(ch);
	putchar(CH);
=======
	
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
>>>>>>> master

	return (0);
}
