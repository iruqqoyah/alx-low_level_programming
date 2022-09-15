#include "main.h"

/**
 * abs - find absolute value of a number
 * Return: 0, otherwise 1
 */

int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
		_putchar("%d\n", n);
		return 0;
	}
}
