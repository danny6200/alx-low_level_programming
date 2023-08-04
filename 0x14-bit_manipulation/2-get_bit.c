/**
 * get_bit - returns the value of a bit at an index
 * @n: integer
 * @index: index of bit value to be returned
 *
 * Return: 1 or 0 on success and -1 on failure
 */
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
