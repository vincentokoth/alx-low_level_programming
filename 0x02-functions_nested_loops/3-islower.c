/*
 * File: 3-islower.c
 * Author: Vincent Okoth
 */

/**
 * _islower-a function that checks for lowercase character
 * @c: The character to be checked .
 *Return: 1 if c is lowercase, otherwise return 0
 */
#include "main.h"
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
