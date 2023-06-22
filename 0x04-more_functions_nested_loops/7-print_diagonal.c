#include "main.h"
/**
 * print_diagonal - prints certain number of backward slashes to screen
 * based on argument given
 * @n: number of backward slashes to print
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
