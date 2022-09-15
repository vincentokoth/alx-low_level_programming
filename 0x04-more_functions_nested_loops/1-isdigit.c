/*
* File: 1-isdigit.c
* Author: Vincent Okoth
*/

/**
* _isdigit - a function that checks for a digit (0 through 9)
* @c: the character to be checked.
* Return: 1 if c is a digit. otherwise return 0
*/
#include "main.h"

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
