#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion(char *s) - entry point
 * @s: input string
 * Return: 0 always
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%c", *s);
		_print_rev_recursion(s-1);
	}

	else
		printf("\n");
}
