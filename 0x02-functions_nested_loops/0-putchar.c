#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: hello world
 *
 * Return: 0 if no errors
 */

int main(void)
{
	char *ch = "_putchar";

	while(*ch)
	{
		putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
