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
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	
	for (i = 0; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("The addition is %d\n", sum);
	return (0);
}
