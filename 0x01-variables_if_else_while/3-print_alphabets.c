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
	char lower;
	for (upper = 'a' ; upper <= 'z' ; upper++)
	{
		putchar(upper);
		return (0);
	}
	for (lower = 'A' ; lower <= 'Z' ; lower++)
	{	
		putchar(lower);
		putchar('\n');
		return (0);
	}
}
