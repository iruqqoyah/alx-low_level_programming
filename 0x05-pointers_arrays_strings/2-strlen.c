#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 * Return: 0 of no errors
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
