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

	printf("Size of a char: %zu byte(s)", sizeof(g));
	printf("\nSize of an int: %zu byte(s)", sizeof(a));
	printf("\nSize of a double: %zu byte(s)", sizeof(b));
	printf("\nSize of a long int: %zu byte(s)", sizeof(c));
	printf("\nSize of a long long int: %zu byte(s)", sizeof(d));
	printf("\nSize of a float: %zu byte(s)", sizeof(f));

	return (0);
}
