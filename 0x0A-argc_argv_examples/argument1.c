#include <stdio.h>
#include <stdlib.h>
/**
 * main - contains code for arguments.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d]: %s", count, argv[count]);
		}
	}
	else
		printf("The command had no other argument");

	return (0);
}
