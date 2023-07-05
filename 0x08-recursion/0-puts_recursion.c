/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to the string to be printed out
 *
 * Return: nothing
 */
#include "main.h"
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
