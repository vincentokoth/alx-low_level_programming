/*Author: Vincent Okoth*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a randomly generated number.
 *
 * Return: Always 0.
  */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n / 10) > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n",
		       n, n / 10);
	}
	else if ((n / 10) == 0)
	{
		printf("Last digit of n is %d and is zero\n", n, n / 10);
	}
	else if ((n / 10) < 6 && != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not zero\n"
		       , n, n / 10);
	}
	return (0);
}
