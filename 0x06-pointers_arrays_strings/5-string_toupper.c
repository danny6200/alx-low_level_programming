#include "main.h"
/**
 * string_toupper - converts all lowercase letters in a string to uppercase
 * @str: string to be converted to uppercase
 *
 * Return: a character pointer
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (p);
}
