#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse direction
 *
 *  countrev1 is to first count to the end, n is to count back
 *
 *  @s: str input
 *
 *  Return: string in reverse
 *
 */

void print_rev(char *s)
{

		int countrev1 = 0;

			int i, n;

			for (i = 0; s[i] != '\0'; i++)
			{

			countrev1++;

			}


			for (n = (countrev1 - 1); n >= 0; n--)
			{

			putchar(s[n]);

			}

	putchar('\n');

}
