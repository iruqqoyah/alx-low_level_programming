

#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/** main:
 *
 *
 *
 * Description: hello world
 *
 * Return: 1 if errors, otherwise return 0
 *
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if (n == 0)
				{
					printf("Last digit of %d is %d and is 0\n");
				}
				else if (n > 5)
				{
					printf("Last digit of %d is %d and is greater than 5\n");
				}
				else if (n<6 && n!=0)
				{
					printf("%d Last digit of %d  is %d and is less than 6 and not 0\n)";
							}	

					return (0);

}
