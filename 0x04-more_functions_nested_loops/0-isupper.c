/*
*File: 0-isupper.c
*Author: Vincent Okoth
*/

/**
*_isupper - a function that checks for uppercase character
*@c: The character to be checked.
*Return: 1 if c is uppercase, otherwise return 0
*/

#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
