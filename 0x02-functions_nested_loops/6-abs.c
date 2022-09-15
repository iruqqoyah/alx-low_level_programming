#include "main.h"

/**
 * _abs - find absolute value of a number
 * @n: input number
 * Return: 0, otherwise 1
 */

int _abs(int n)
{

	if (n < 0)
		return (n * -1);
	else
		return (n);
}
