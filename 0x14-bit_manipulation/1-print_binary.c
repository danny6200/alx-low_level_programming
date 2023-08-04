/**
 * print_binary - converts an integer to binary
 * @n: integer to be converted to binary
 *
 * Return: nothing
 */
#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int i, numBit, bit, non_zero = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	numBit = (sizeof(unsigned long int) * 8);

	for (i = 1; i <= numBit; i++)
	{
		mask = 1UL << (numBit - i);
		bit = mask & n;

		if (!bit && non_zero == 0)
			continue;
		if (bit)
		{
			_putchar('1');
			non_zero++;
		}
		if (!bit && non_zero > 0)
			_putchar('0');
	}
}
