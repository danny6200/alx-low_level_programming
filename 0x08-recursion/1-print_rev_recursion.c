/**
 * _print_rev_recursion - prints a string in reverse
 * @s: points to the string to be printed in reverse
 *
 * Return: nothing
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
