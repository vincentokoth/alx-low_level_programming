/*
* File: 2-print_alphabet_x10.c
* Author: Vincent Okoth
*/

#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/
void print_alpabet_x10(void)
{
	int count = 0;
	char  ltr;

	while (count++ <=9)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
		_putchar('\n');
	}
}
