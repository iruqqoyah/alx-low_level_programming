#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 if no errors
 */

void swap_int(int *a, int *b)
{

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
