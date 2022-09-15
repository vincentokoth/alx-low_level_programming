/*
* File: 10-print_triangle.c
* Author: Vincent Okoth
*/

/**
* print_triangle - a function that prints a triangle, followed by a new line
* @size: The character to be printed.
*/

#include "main.h"

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
