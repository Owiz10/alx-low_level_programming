#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: input to reverse
 *
 * Return: string and in reverse
 *
 */

void rev_string(char *s)
{

	char rev = s[0];

	int countrev1 = 0;

	int i;



		while (s[countrev1] != '\0')

			countrev1++;

		for (i = 0; i < countrev1; i++)
		{

		countrev1--;

		rev = s[i];

		s[i] = s[countrev1];

		s[countrev1] = rev;

		}

}
