/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to an integer
 * @index: index of the bit to be set to 1
 *
 * Return: -1 on failure and 1 on success
 */
#include "main.h"
#include <stddef.h>

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
