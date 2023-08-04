/**
 * get_endianness - checks the endianness of multi-byte memory
 *
 * Return: 0 for big endian and 1 for little endian
 */
#include "main.h"
#include <stdio.h>

int get_endianness(void)
{
	unsigned int num;
	char *ptr;

	num = 1;
	ptr = (char *)&num;

	return ((*ptr == 1) ? 1 : 0);
}
