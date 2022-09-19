/*
 * File: 1-swap.c
 * Author: Vincent Okoth
 */

#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers..
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
