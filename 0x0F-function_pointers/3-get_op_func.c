#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function pointer
 * @s: string
 * Return: i don't know
 */

int (*get_op_func(char *s))(int, int)
{
	
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}




