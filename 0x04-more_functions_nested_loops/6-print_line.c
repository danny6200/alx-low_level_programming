#include "main.h"
/**
 * print_line - prints line of length n dashes
 * @n: determines the number of dashes
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
