/**
 * _strstr - locates the first occurrence of a substring
 * @haystack: string where substring is searched for
 * @needle: substring required
 *
 * Return: pointer to the beginning of the substring
 */
#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0')
		{
			if (*h == *n)
			{
				h++;
				n++;
			}
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
