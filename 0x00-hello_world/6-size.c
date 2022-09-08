#include <stdio.h>
/*
 *
 *
 *
 *
 */

int main(void)
{
	char g;
	int a;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)", sizeof(g));
	printf("\nSize of an int: %d byte(s)", sizeof(a));
	printf("\nSize of a long int: %d byte(s)", sizeof(c));
	printf("\nSize of a long long int: %d byte(s)", sizeof(d));
	printf("\nSize of a float: %d byte(s)", sizeof(f));

	return (0);
}
