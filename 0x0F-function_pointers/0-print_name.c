#include <stdio.h>
#include <stdlib.h>
#include "functions_pointers.h"


/**
 * print_name - Entry point
 * @name: name of person
 * @f: function pointer
 * Return: Nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
