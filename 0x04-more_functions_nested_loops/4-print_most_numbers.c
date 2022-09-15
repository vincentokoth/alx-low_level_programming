/*
* File: 4-print_most_numbers.c
* Author: Vincent okoth
*/

/**
* print_most_numbers - a function that prints the numbers, from 0 to 9,
*			followed by a new line
*/

#include "main.h"

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
