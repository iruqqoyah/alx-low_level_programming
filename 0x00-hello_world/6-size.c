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
	double b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu", sizeof(g));
	printf("Size of a int: %zu", sizeof(a));
	printf("Size of a double: %zu", sizeof(b));
	printf("Size of a long int: %zu", sizeof(c));
	printf("Size of a long long int: %zu", sizeof(d));
	printf("Size of a float: %zu", sizeof(f));

	return (0);
}
