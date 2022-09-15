/*
* File: 8-print_square.c
* Author: Vincent Okoth
*/

/**
* print_square - a function that prints a square, followed by a new line.
* @size: the size of the square.
*/

#include "main.h"

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			_putchar('#');

		if (height == size - 1)
			continue;
		_putchar('\n');
		}

	}

	_putchar('\n');
}
