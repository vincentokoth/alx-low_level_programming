/*
 * File: 2-print_alphabet_x10.c
 * Author: Vincent Okoth
 */

/**
 * print_alphabet_x10- a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

#include "main.h"

void print_alphabet_x10(void)
{
	int count = 0;
	char ltr;

	while (count++ <= 9)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
		_putchar('\n');
	}
}
