#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function name
 * @n: integer 
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + va_arg (ap, int);

	va_end (ap);

	return sum;
}
