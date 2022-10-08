#include <unistd.h>

/**
 * main-Entry point
 *
 * _putchar - a function serving as an input
 *
 * @c: any character input
 *
 * Return: 0 if successful
 *
 */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
