#include "main.h"
/**
 */
int _sqrt_recursion(int n)
{
	int i;
	
	if (i * i > n)
		return (-1);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (i * i == n)
		if (n % 5 == 0 || n % 3 == 0 || n % 2 == 0)
			return (i);
}
