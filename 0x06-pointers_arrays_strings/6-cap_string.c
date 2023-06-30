#include "main.h"
/**
 * cap_string - capitalises all words of a string
 * @str: string to be capitalised
 *
 * Return: a pointer to the string
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (capitalize_next && ((*ptr >= 'a' && *ptr <= 'z') ||
					(*ptr >= 'A' && *ptr <= 'Z')))
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - ('a' - 'A');
			}
			capitalize_next = 0;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
			*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
			*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		ptr++;
	}
	return (str);
}
