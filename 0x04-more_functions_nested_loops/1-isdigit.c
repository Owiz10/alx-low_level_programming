#include "main.h"

/**
 *
 *  _isdigit	-	checks the input if it is a digit
 *
 *  @c:			The input to be printed
 *
 *  Return:	-	1 if c is a digit else, 0
 *
 */

int _isdigit(int c)

{

	int item;

	for (item = '0'; item <= '9'; item++)

			{

				if (item == c)

				return (1);

			}

	return (0);

}
