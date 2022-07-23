#include <stdio.h>
/**
 * factorial - Factorial using recursion
 * @num: first param
 * Return: 1 and factorial num
 */
int factorial(int num)
{
	if (num == 0)
	{
		return (1);
	}
	printf("%d\n", num);
	return (num = num * factorial(num - 1));
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
	printf("5! is %d\n", f);

	return (0);
}
