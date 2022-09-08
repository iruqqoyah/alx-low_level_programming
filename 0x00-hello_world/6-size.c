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

	printf("Size of a char: %zu", sizeof(g) "\ byte(s)");
	printf("\nSize of a int: %zu", sizeof(a));
	printf("\nSize of a double: %zu", sizeof(b));
	printf("\nSize of a long int: %zu", sizeof(c));
	printf("\nSize of a long long int: %zu", sizeof(d));
	printf("\nSize of a float: %zu", sizeof(f));

	return (0);
}
