/*
 * File: 5-sqrt_recursion.c
 */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - A function that finds the natural square root
 *             of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: the square root - if the number has a natural sqaure root.
 *         -1 - if the number does not have a natural sqaure root.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural
 *                   square root of a number.
 * @n: The number whose square root is to be returned.
 *
 * Return: If n has natural square root - the natural square root of n.
 *         If n does npt have a natiral square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
