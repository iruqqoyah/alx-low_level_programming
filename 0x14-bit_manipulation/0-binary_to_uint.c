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
	int i = 0, int base = 1;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		result += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}
	return (result);

}
