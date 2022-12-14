#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - entry point
 *
 * @x: base digit
 *
 * @y: power digit
 *
 * Return: 0 always
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		int fact = x * _pow_recursion(x, y - 1);

		return (fact);
	}

	return (0);
}
