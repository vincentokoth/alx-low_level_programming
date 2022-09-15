/*
* File: 3-print_numbers.c
* Author: Vincent Okoth
*/

/**
* print_numbers - a function that prints the numbers, from 0 to 9,
*		followed by a new line
*Ruturn: The printed numbers
*/

#include "main.h"

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
