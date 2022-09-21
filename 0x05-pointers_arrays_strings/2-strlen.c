#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 * @count: count integer
 * Return 0: of no errors
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
