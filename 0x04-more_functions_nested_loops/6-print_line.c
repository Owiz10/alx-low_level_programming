#include "main.h"

/**
 * print_line	-	prints a line
 *
 * @n:	Defines the length of line to be printed
 *
 * Return:	Always 0
 *
 */

void print_line(int n)
{

		if (n <= 0)
		{

			putchar('\n');


		}

		else

		{

				while (n > 0)
				{

					putchar('_');

					n--;

				}

		putchar('\n');

		}
}
