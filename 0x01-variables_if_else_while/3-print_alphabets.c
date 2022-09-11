#include <stdio.h>


/**
 *
 * main - entry point
 *
 *
 * Return 0: success code is 0
 */


int main(void)
{
	char upper;
	for (upper = 'a' ; upper <= 'z' ; upper++)
		putchar(upper);
		for (upper = 'A' ; upper <= 'Z' ; upper++)
			putchar(upper);
			putchar('\n');
			return (0);
}
