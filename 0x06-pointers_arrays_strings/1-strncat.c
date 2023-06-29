#include "main.h"
/**
 * _strncat - concats two strings up to n character of str2
 * @dest:holds destination address for concat result
 * @src: holds address for str 2
 * @n: no of bytes to concat
 *
 * Return: p, pointer to pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	char *dest_ptr = p;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}

	*p = '\0';

	return (dest_ptr);

}

