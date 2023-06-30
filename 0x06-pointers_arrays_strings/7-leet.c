#include "main.h"
/**
 * leet - encodes string
 * @str: string to be encoded
 *
 * Return: character pointer
 */

char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char ch = *ptr;

		if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') ||
		(ch == 'o' || ch == 'O') || (ch == 't' || ch == 'T') ||
		(ch == 'l' || ch == 'L'))
		{
			if (ch == 'a' || ch == 'A')
				*ptr = '4';
			else if (ch == 'e' || ch == 'E')
				*ptr = '3';
			else if (ch == 'o' || ch == 'O')
				*ptr = '0';
			else if (ch == 't' || ch == 'T')
				*ptr = '7';
			else if (ch == 'l' || ch == 'L')
				*ptr = '1';
		}
		ptr++;
	}
	return (str);
}
