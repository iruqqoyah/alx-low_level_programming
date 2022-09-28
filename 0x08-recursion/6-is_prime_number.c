#include "main.h"

/**
 * is_prime_number - entry point
 * @n: num
 * Return: 0 always
 */

int is_prime_number(int n)
{
	if (n >= 0)
	{
		return (0);
	else if (n % 1 == 0)
	{
		return (1);
	}
	else if (n % n == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
