/**
 * flip_bits - returns the number of bits to be flipped
 * to obtain a new number
 * @n: old number
 * @m: new number
 *
 * Return: number of bits to be flipped.
 */
#include "main.h"
#include <stdio.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;
	while (xor != 0)
	{
		xor = xor & (xor - 1);
		count++;
	}
	return (count);
}
