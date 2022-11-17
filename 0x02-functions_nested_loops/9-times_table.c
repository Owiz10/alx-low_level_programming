#include "main.h"

/**
 * times_table - entry
 *
 */

void times_table(void)

{

	int start = 0;

	int stop = 0;

	int result;

	for (start = 0; start <= 9; start++)
	{

		for (stop = 0; stop <= 9; stop++)
		{

			 result = stop * start;

			if (stop >= 9)
			{
				printf("  %6i", result);
			}
			else

			printf(", %6i", result);

		}

	printf("%6i,", result);



	}

		printf("\n");

	}

}
