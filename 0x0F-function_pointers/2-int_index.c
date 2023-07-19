/**
 * int_index - returns the index of an element that matches a given integer
 * @array: array to search for the given integer
 * @size: size of the given array
 * @cmp: pointer to the compare function
 *
 * Return: the index of the found integer on success
 */
#include <stddef.h>
#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (0);

	if (size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
