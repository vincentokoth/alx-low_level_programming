/*
 * File: 1-alphabet.c
 * Author: Vincent Okoth
 */

/**
 * print_alphabet- a function that prints the alphabet, in lowercase,
 * followed by a new line.
 */

#include "main.h"

void print_alphabet(void)
{
	char ltr = 'a';

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);

	_putchar('\n');
}
