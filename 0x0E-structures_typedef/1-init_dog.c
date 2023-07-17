/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: value for first member of struct dog
 * @age: value for second member
 * @owner: value for third member
 *
 * Return: nothing
 */
#include "dog.h"
#include <stddef.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
