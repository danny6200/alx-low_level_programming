/**
 * array_iterator - iterates over a given array and perform an action
 * on each array's element
 * @array: array to be iterated over
 * @size: array size
 * @action: pointer to a function to be performed on an array
 *
 * Return: nothing
 */
#include <stddef.h>
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size == 0 || array == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		(*action)(array[i]);
}
