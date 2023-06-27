#include "main.h"
/**
 * _strcpy - copy the string pointed by scr to the buffer pointed to by dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest += '\0';

	return (ptr);
}
