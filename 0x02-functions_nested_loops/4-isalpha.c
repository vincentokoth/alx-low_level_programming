/*
 * File: 4-isalpha.c
 * Author: Vincent Okoth
 */

/**
 * _isalpha-a function that checks for alphabetic character.
 * @c: The character to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise return 0
 */

#include "main.h"

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	 (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
