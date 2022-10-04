#include <stdio.h>

/**
 * main - entry point
 * @argc: count element
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, mul = 1;

	if (argc > 3)
	{
		for ( i = 0; i < argc; i++)
		{
			printf("mul is %d", mul);
			mul =  mul * atoi(argv[i]);
		}
	}
	else
		printf("Error\n");
	return (0);

}
