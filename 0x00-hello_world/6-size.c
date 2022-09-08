#include <stdio.h>
/**
* main - whatever detail of the main function
*
* Description: detail of your code
*
* Return: 1 if error, otherwise 0
*/
int main(void)
{
	char g;
	int a;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
