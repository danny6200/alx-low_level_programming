/**
 * _memset - fills a memory area with byte b up to n bytes
 * @s: points to the starting memory address
 * @b: byte to be used in filling the memory area
 * @n: determines the limit of the memory area to be filled
 *
 * Return: pointer to a pointer to a char
 */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (p);
}
