#include "main.h"
/**
 * _strcmp(char *s1, char *s2) - compares two strings
 * @s1: points to first string
 * @s2: points to second string
 *
 * Return: ASCII difference of string characters that are different
 */
int _strcmp(char *s1, char *s2)
{
	while (s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return *(unsigned char*)s1 - *(unsigned char*)s2;
}
