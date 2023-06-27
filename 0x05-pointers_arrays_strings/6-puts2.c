#include "main.h"
/**
 * puts2 - prints every other character of a string starting from the first.
 * @str: string whose other charcter is to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != 0)
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
