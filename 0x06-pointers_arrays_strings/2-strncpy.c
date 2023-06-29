#include "main.h"
/**
 * _strncpy - copies a string to another up to n bytes
 * @dest: copy destination
 * @src: copy source
 * @n: no of bytes to copy
 *
 * Return: pointer to copy destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int len = 0;
	char *dest_ptr = p;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
		len++;
	}

	if (len < n)
	{
		int i = len;

		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest_ptr);
}
