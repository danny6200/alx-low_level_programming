/**
 * malloc_checked - returns a pointer to an allocated memory
 * @b: determines the bytes of memory to be allocated
 *
 * Return: pointer to allocated memory
 */
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
