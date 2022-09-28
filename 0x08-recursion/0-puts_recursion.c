#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Entry point
 *
 * @s: string
 *
 * Return: 0 always
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	printf("%c", *s);
	_puts_recursion(s + 1);
}

	else
		printf("\n");
}
