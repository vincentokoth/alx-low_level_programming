/*Author: Vincent Okoth*/

#include <stdio.h>

/**
 *
 *main- prints the alphabet in lowercase, followed by a new line.
 *
 *Return- 0
 */
int main(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
