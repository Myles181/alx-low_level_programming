#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
/* when n > 0 */
 /* display is positive */
	if (n > 0)
{
	printf("is positive\n");
}
/* when n == 0 */
/* display is zero */
	else if (n == 0)
{
	printf("is zero\n");
}
/* when n < 0 */
/* display is negative */
	else if (n < 0)
{
	printf("is negative\n");
}
/* Return - return (0) */
	return (0);

}
