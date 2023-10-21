/*
 * File: 2-strlen_recursion.c
 */

#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: The string whose length is to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
