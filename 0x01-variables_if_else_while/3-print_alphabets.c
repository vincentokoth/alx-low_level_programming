/*Author: Vincent Okoth*/

#include <stdio.h>

/**
 *main- Prints the alphabet in lowercase, then uppercase,
 * followed by a new line.
 *
 *Return: 0 if output is correct.
 */
int main(void)
{
	char lts;

	for (lts = 'a'; lts <= 'z'; lts++)
	{
		putchar(lts);
	}

	for (lts = 'A'; lts <= 'Z'; lts++)
	{
         	putchar(lts);
	}
        putchar('\n');


	return (0);
}
