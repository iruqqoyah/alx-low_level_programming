#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * * main - whatever detail of the main function
 * *
 * * Description: detail of your code
 * *
 * * Return: 1 if error, otherwise 0
 *
 */

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

			if (n > 0) 
				{
					printf("%d is positive", n);
				}
				else if (n < 0)
				{
					printf("%d is negative", n);
				}
				else
				{
					printf("%d is zero", n);
				}
					return (0);

}
