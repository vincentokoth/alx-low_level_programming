/*
 * File: 7-print_tebahpla.c
 * Auth: Vincent Okoth
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lts;

	for (lts = 'z'; lts >= 'a'; lts--)
		putchar(lts);

	putchar('\n');

	return (0);
}
