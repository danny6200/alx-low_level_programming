/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer to character
 * @to: pointer to string to be used to set pointer to char
 *
 * Return: nothing
 */
#include "main.h"

void set_string(char **s, char *to)
{
	*s = to;
}
