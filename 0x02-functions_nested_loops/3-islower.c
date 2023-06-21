#include "main.h"
/**
 * _islower - checks if a character is a lower case alphabetic
 * character
 *
 * Return: 1 if true and 0 if false.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
