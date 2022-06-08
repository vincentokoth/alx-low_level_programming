/*
 * File: 1-alphabet.c
 * Auth: Vincent Okoth
 */

#include "main.h"

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);

	_putchar('\n');
}
