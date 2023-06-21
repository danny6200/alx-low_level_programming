#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number whose sign is printed
 *
 * Return: 1 for positive values
 * 0 for zero value
 * -1 for negative values
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
