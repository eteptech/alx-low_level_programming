#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random number and assigned to int
 * everytime it executes
 * Return:exit (SUCCESS)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n<0)
		printf("%d is nagative\n", n);
	exit(EXIT_SUCCESS);
}

