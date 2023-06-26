#include "main.h"
/**
 * _strlen - returns the length of a string passed to it
 * @s: character pointer of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
