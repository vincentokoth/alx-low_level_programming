/*
 * File: 8-print_base16.c
 * Auth: Vincent Okoth
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char lts;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lts = 'a'; lts <= 'f'; lts++)
		putchar(lts);

	putchar('\n');

	return (0);
}
