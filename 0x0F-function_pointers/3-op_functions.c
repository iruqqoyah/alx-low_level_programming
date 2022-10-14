#include "3-calc.h"

/**
 * op_add - function for add
 *
 * Return: nothing
 */

int op_add (int a, int b)
{
	return a + b;
}

/**
 * op_sub - function for podulus
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

int op_sub (int a, int b)
{
	return a - b;
}


/**
 * op_mul - function for podulus
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

int op_mul (int a, int b)
{
	return a * b;
}


/**
 * op_div - function for podulus
 * @a: first integer
 * @b: second integer
 * Return: division
 */

int op_div (int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return a / b;
}


/**
 * op_mod - function for podulus
 * @a: first integer
 * @b: second integer
 * Return: modulus
 */

int op_mod (int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return a % b;
}
