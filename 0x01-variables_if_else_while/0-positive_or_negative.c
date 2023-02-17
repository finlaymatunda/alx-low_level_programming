#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main header - Declare header
 * Return 0 (When successfuL
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}

