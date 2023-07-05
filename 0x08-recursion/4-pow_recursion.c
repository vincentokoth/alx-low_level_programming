/*
 * File: 4-pow_recursion.c
 */

#include "main.h"

/**
 * _pow_recursion -  a function that returns the
 *                   value of x raised to the power of y.
 *
 * @x: The value to be raised.
 *
 * @y: The power value.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
