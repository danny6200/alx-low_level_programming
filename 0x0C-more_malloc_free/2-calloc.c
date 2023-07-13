/**
 * _calloc - allocates memory dynamically. Works like the calloc
 * function
 * @nmemb: number of members in the array
 * @size: size of each element in the array
 *
 * Return: a void pointer
 */
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *a;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	a = (char *)array;
	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;
	return (array);
}
