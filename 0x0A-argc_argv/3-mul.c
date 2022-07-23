#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: Vector argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
	}
	else
	{
		printf("Error");
	}
	putchar('\n');
	return (0);
}
