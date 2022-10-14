#ifndef _CALC_H_
#define _CALC_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - struct op
 * @op: operator 
 * @f: pointer operator
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
