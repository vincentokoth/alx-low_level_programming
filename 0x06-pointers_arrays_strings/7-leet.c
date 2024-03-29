/*
 * File: 7-leet.c
 * Author: Vincent Okoth
 */

/**
 * leet - a function that encodes a string into 1337.
 *
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

#include "main.h"

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
				str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}

		index1++;
	}

	return (str);
}
