#include <stdio.h>
/**
 * factorial - Getting the factorial of num using iterative process
 * @num: First param
 * Return: result
 */
int factorial(int num)
{
	int result;
	int i;

	result = 1;
	i = 1;

	while (i <= num)
	{
		printf("%d\n", i);
		result = result * i;
		i++;
	}
	return (result);
}
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int f;
       f = factorial(5);

	printf("5! is %i", f);
	putchar('\n');
	return (0);
}
