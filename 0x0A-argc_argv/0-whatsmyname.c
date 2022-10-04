#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count the number of parameters that goes into the main.
 *@argv: pointer of array of pointers that contain strings entering the main.
 *Return: 1 if successful
 */

int main(int argc, char **argv)
{

if (argc > 0)
	printf("%s\n", argv[0]);
return (0);

}
