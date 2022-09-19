/*
 * File: 4-print_rev.c
 * Author: Vincent Okoth
 */

#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 *		followed by a new line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;
	{
		for (index = len - 1; index >= 0; index--)
			_putchar(s[index]);
	}

	_putchar('\n');
}
