#include "stdio.h"
#include "main.h"

/**
 * binary_to_uint - entry point
 * @b - string of 0 and 1
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = 2 * result + ((b[i] - '0');

	}

	return (result);

}
