/*
* File: 5-more_numbers.c
* Author: Vincent Okoth
*/

/**
* more_numbers - a function that prints 10 times the numbers, from 0 to 14,
*		followed by a new line.
*/

#include "main.h"

void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
