/*
 * File: 3-factorial.c
 */

#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: The number whose factorial is to be returned.
 *
 * Return: the factorial of n if n > 0.
 *         -1 indicating an error if n < 0.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
