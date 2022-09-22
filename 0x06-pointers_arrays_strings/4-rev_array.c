/*
 * File: 4-rev_array.c
 * Author: Vincent Okoth
 */

/**
 * reverse_array- a function that reverses the content of an array of integers.
 *
 * @a:  The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

#include "main.h"

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
