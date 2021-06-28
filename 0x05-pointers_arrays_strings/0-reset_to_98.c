/*
 * File: 0-reset_to_98.c
 * Auth: Okoth Vincent Odhiambo
 */
#include "holberton.h"
#include <stdio.h>

void reset_to_98(int *);

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}


