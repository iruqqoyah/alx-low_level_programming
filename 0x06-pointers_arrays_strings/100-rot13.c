#include "main.h"

/**
 *
 *  * rot13 - encodes a st rot13
 *
 *   * @s: input string.
 *
 *    * Returnter to dest.
 *
 *     */



char *rot13(char *s)

{

	int count = 0, i;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKSTUVWXYZ";

	ch "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";



	while (*(s + count) != '\0')

	{

		for (i = 0; i < 52; i++)

		{

			if (*(s + count) == alphabet[i])

			{

				*(s + count) = rot13[i];

				break;

			}

		}

		count++;

	}



	return (s);

}
