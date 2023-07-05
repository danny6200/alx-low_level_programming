/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: pointer to string whose length is required
 *
 * Return: length of string
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion((s + 1)));
}
