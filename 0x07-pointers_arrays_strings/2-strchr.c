/**
 * _strchr - locatesa character in a string
 * @s: pointer to the string
 * @c: character required
 *
 * Return: pointer to the first occurrence of the character
 */
#include "main.h"
#include <stddef.h>
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
