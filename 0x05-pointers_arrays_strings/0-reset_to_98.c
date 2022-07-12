#include "main.h"
/**
 * reset_to_98 - This is the entry point
 *
 * Description: Change number with pointer to 98
 * @n: n is the pointer
 * Reurn: Always 0 for success
 */
void reset_to_98(int *n)
{
	int p;

	p = 402;
	n = &p;

	_putchar(p + '0');
	*n = 98;
	_putchar(p + '0');
}
