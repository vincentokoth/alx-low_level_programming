/*
 * File: 3-alloc_grid.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 *              2 dimensional array of integers.
 *
 * @width: The width of the 2-dimentional array.
 * @height: The height of the 2-dimentional array.
 *
 * Return: NULL on failure on when width or height == 0.
 *         Otherwise a pointer to the 2-D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoDim;

	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * height);

	if (twoDim == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		twoDim[height_index] = malloc(sizeof(int) * width);

		if (twoDim[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoDim[height_index]);

			free(twoDim);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoDim[height_index][width_index] = 0;
	}

	return (twoDim);
}
