#include "main.h"

/**
 * print_most_numbers	-	Entry
 *
 */

void print_most_numbers(void)
	{

		int no;

			for (no = 0; no <= 9; no++)
			{

				if (no == 2 || no == 4)
					continue;

					else

					printf("%i", no);

			}

		printf("\n");

	}
