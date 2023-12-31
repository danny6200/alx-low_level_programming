/**
 * print_dog - prints the members/values of a "struct dog" variable
 * @d: points to the variable's address
 *
 * Return: nothing
 */
#include "dog.h"
#include <stddef.h>
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
