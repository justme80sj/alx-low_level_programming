#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print if the number is  positive, negative and zero
 * return: Always 0
 */

int main(void)

{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;

	if (k > 0)
	{
		printf("%d is positive\n", k);
	}
	else if (k == 0)
	{
		printf("%d is zero\n", k);
	}
	else
	{
		printf("%d is negative\n", k);
	}
	return (0);
}
