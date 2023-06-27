#include "main.h"
/**
 * puts_half - prints the last half of a given string
 * @str: string whose last half is required
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
