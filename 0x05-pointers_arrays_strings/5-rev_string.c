#include "main.h"
/**
 * rev_string - reverses a given string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int m, n;

	while (s[length] != 0)
		length++;

	for (m = 0, n = length - 1; m < n; m++, n--)
	{
		char temp = s[m];

		s[m] = s[n];
		s[n] = temp;
	}
}

