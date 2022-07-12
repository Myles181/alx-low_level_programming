#include "main.h"
/**
 * swap_int - Thiss is the Entry point
 * @a: Swap value with b
 * @b: Swap value with a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
