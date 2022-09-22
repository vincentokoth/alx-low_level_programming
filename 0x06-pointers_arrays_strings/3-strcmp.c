/*
 * File: .3-strcmp.c.swp
 * Author: Vincent Okoth
 */

/**
 * _strcmp - a function that compares two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str 1 < str2, the negative difference of the first unmatched
 *	character.
 *	If str1 == str2, 0.i
 *	If str1 > str 2, the positive difference of the first unmatched character.
 */

#include "main.h"

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
