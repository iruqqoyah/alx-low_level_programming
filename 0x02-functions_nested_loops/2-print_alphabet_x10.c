#include "main.h"

/**
 *
 * Print 10x alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count=0;
	while (count <10 )
	{
		int ch;
		for (ch='a'; ch<='z'; ch++)
		{
			_putchar(ch);
		}
		count++;
		_putchar('\n');
}
}
