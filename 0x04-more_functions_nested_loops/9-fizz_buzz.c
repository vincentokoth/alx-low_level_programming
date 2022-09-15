/*
* File: 9-fizz_buzz.c
* Author: Vincent Okoth
*/

/**
* main - a program that prints the numbers from 1 to 100,
*	followed by a new line
*	But for multiples of three prints Fizz instead of the number,
*	and for the multiples of five prints Buzz
*	For numbers which are multiples of both three and five prints FizzBuzz
*
*Return: Always 0
*/

#include <stdio.h>

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{

		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
