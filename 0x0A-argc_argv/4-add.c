#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count element
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("The addition is %d\n", sum);
	return (0);
}
