#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - Entry point
 *
 * @s: input string
 *
 * Return: 0 always
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%ld", strlen(s));
		_strlen_recursion(s + 1);
	}
	return (0);
}
