#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: points to string 1, the destination for the concatenation
 * @src: points to string 2, to be concat with string 1
 *
 *
 * Return: p, points to dest, which holds the concat of the strings
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	char *dest_ptr = p;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';

	return (dest_ptr);
}

