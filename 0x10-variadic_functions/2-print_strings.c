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
	va_list ap;
	
	int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, int);
		if (separator == NULL && i = (n - 1))
			printf("nil");
	}

	printf("\n");
}

