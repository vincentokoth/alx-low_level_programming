/*
 * File: 11-print_to_98.c
 * Author: Vincent Okoth
 */

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 *		followed by a new line.
 *@n: The initial number from where the count begins
 */

#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
