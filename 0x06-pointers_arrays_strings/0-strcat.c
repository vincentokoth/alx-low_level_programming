/*
*File: 0-memset.c
* Author: Vincent Okoth
*/

#include "main.h"

/**
* _strncat - a function that concatenates two strings.
*
* @dest: destination of concat
* @src: source array to concat
* @n: amount of times to append
* Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
