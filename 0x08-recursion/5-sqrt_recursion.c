#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *
 * _sqrt_recursion - entry point
 * @n: integer num
 * Return: 0 always
 */

int _sqrt_recursion(int n)
{
	if (n >= 0)
	{
		return (_sqrt_recursion(n));
	}
	else
		return (-1);
}
