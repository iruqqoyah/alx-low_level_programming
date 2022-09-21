#include "main.h"

/**
 * _puts - put function
 * @str: str var
 * Return: 0 if no errors
 */


void _puts(char *str)
{

	int count = 0;

	while (count >=0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
