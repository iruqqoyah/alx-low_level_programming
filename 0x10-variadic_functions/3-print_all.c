#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function name
 * @format: symbols
 */

void print_all(const char * const format, ...)
{
	unsigned int i;

	va_list ap;

	char *str, *separator;

	va_start(ap, format);

	separator = "";
	
	i = 0;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}

	separator = ", ";
	i++;
	}

	printf("\n");
	va_end(ap);
}

