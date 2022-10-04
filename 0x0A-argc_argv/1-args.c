#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0 if sucessful
 */

int main(int argc, char **argv)
{

int i;
	for (i = 0; i < argc; i++)
	{

	argv[i] = argv[i];

	}

	printf("%d\n", i - 1);

	return (0);


}
