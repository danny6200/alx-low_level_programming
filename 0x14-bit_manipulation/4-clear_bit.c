/**
 * clear_bit - sets a the value of a bit to 0
 * @n: pointer to an integer whose bit is to be cleared
 * @index: index of bit to be cleared
 *
 * Return: -1 on failure and 1 on success
 */

#include "main.h"
#include <stdio.h>

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
