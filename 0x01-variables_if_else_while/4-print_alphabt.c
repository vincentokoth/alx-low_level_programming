/*Author: Vincent Okoth*/

#include <stdio.h>

/**
 *main- Prints the alphabet in lowercase, followed by a new line.
 *
 *Return: 0 if output is correct.
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		if ((lc = 'e') || (lc = 'q'))
		{
			continue;
		}

	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
