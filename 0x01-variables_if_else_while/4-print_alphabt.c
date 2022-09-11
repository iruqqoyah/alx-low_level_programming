#include <stdio.h>

/**
 * main - entry point
 *
 * Description: main code
 *
 * Return: 1 if errors, otherwise 0
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch != 'q' ; ch != 'e'; ch++)
		putchar(ch);
		putchar('\n');

	return (0);
}
