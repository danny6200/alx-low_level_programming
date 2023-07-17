/**
 * free_dog - frees the memory space used to store "dog"
 * @d: points to the dog struct variable
 *
 * Return: nothing
 */
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
