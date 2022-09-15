/*
 * File: 6-abs.c
 * Author: Vincent Okoth
 */

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: The integer whose absolute value is to be computed
 * Return: The absolute value of the integer
 */

#include "main.h"

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
