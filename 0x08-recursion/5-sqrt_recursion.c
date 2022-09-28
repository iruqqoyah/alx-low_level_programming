#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - entry point
 * @n: integer num
 * Return: 0 always
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (squareroot(nc, (n + 1) / 2));
	}
	else
		return (-1);
}

/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */

int squareroot(int n, int i)
{

	if (i < 1)

		return (-1);

	else if (i * i == n)

		return (i);

	else

		return (squareroot(n, i - 1));

}
