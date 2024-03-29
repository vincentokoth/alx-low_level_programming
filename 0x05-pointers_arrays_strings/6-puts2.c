/*
 * File: 6-puts2.c
 * Auth: Vincent Okoth
 */

#include "main.h"

/**
 * puts2 - Prints one char out of two of a string,
 *	followed by a new line..
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
