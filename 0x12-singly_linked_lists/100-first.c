#include <stdio.h>

void __attribute__((constructor)) before_main();

/**
 * before_main - prints out the message before the main function
 *
 * Return: nothing
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
