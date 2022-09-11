#include <stdio.h>


/**
 * main - entry point
 *
 *Description: details of code
 *
 * Return: success code is 0
 */


int main(void)
{
	char upper;

	for (upper = 'a'; upper <= 'z'; upper++)
		putchar(upper);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
			return (0);
}
