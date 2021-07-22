/*Author: Vincent Okoth*/

#include <stdio.h>

/**
 *
 *main prints the alphabet in lowercase, followed by a new line.
 *
 */
main(void)

{
	int ch;

	for (ch = ‘a’; ch <= ‘z’; ch++)
		putchar(ch);
	putchar('\n');
}
