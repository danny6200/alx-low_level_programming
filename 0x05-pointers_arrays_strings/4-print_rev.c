#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: character pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = _strlen(s);

	if (length == 0)
		return;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
