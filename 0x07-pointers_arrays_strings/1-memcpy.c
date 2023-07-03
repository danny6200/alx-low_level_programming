/**
 * _memcpy - copies n bytes from a source memory area
 * to a destination's memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to a pointer to a character
 */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *p = dest;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (p);
}
