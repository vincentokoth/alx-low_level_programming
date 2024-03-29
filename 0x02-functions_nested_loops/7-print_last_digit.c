/*
 * File: 7-print_last_digit.c
 * Author: Vincent okoth
 */

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: The number whose last digit is to be printed..
 * Return: Value of the last digit.
 */

#include "main.h"

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
