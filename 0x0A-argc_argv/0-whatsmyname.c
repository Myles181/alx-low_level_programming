#include <stdio.h>

/**
 * main - Print out string 0.
 * @argc: Count argument
 * @argv: Vector argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
