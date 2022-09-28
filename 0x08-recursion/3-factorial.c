#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * factorial - entry point
 * @n: input number
 * Return: 0 always
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else if (n > 0)
	{
		int fact =  factorial(n * (n - 1));
		return (fact);
}
	return (0);
}
