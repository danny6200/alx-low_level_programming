/**
 * create_array - creates array of characters of size "size"
 * @size: size of array to be created
 * @c: character to be used to fill up array
 *
 * Return: pointer to array
 */
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
