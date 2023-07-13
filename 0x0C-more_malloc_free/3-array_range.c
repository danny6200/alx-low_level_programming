/**
 * array_range - returns an array that ranges from a certain
 * minimum value to a certain maximum value
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int *array_range(int min, int max)
{
	int *arrayRange;
	int i;

	if (min > max)
		return (NULL);
	arrayRange = malloc((max - min + 1) * sizeof(int));
	if (arrayRange == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		arrayRange[i] = i + min;
	return (arrayRange);
}
