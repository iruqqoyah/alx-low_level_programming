#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function name
 * @separator: sepator symbol
 * @n: number of strings
 *
 * Return: print strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	
	unsigned int i;

	char *str;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(strings, char *);
		if ( i = (n - 1))
			printf("nil");
	}

	printf("\n");
}

