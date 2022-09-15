/*
 * File: 5-sign.c
 * Author: Vincent okoth
 */

/**
 * print_sign - a function that prints the sign of a number.
 * @n: The number whose sign will be printed
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
