/*
 * File: 5-sqrt_recursion.c
 */

#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number.
 *
 * @n: The number whose squareroot is to be returned,
 *
 * Return: The natural square root of n if n has a natural squareroot.
 *         -1 if n does not have a natural squareroot.
 */

int _sqrt_recursion(int n)
{
	int sroot = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sroot);
}
