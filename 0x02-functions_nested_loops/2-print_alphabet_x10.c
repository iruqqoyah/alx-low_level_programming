#include "main.h"

/**
 * print_alphabet_x10 - prints alpbath 10 times
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)

	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		count++;
		_putchar('\n');
}
}
