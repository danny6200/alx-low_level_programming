/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to  the set of bytes to be searched for
 *
 * Return: pointer to the byte in that matches one of the byte in accept
 */
#include "main.h"
#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
