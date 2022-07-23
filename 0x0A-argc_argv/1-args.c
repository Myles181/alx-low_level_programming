#include <stdio.h>
/**
 * main - Entry point
 * @argc: count arguments
 * @argv: vector argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d", argc - 1);
	}
	putchar('\n');

	return (0);
}
