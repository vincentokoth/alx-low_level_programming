#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a randomly generated number.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n,ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		ld = n%10;
		printf("The last digit of %d is %d",n,ld);
	}
	return (0);
}
