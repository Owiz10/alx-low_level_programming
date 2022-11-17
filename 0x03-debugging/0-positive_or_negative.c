#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  positive_or_negative - results to the sign of integers
 *  @i: any integer number to be input
 *  Return: 0 if successful
 */



void positive_or_negative(int i)

{
	srand(time(0));

	i = rand() - RAND_MAX / 2;

		if (i > 0)
		{

		printf("%d is positive\n", i);

		}
		else if (i < 0)
		{
			printf("%d is negative\n", i);
		}
		else
		{
			printf("%d is zero\n", i);
		}
	return (void);
}
