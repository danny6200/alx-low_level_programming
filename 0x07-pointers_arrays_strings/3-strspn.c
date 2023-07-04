/**
 * _strspn - returns the number of characters in a string's
 * prefix that are present in the accepted string
 * @s: pointer to the string
 * @accept: pointer to the accepted string
 *
 * Return: no of accepted characters in a string
 */
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				count++;
			a++;
		}
		s++;
	}
	return (count);
}
