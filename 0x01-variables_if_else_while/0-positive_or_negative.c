/**
 * File: 0-positive_or_negetive.c
 * main - main block
 * Description - Prints a random number and states whether
 * it is positive, negative, or zero.
 * return: 0 always
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	/**
	 * main - main block
	 *Description - Main Function
	 *Return: 0 
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);

}
