/**
 * new_dog - creates new variable of type dog
 * @name: value for first member of variable
 * @age: value for second member of variable
 * @owner: value for third member of variable
 *
 * Return: pointer to the new variable created
 */
#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, j, len1 = 0, len2 = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc((len1 + 1) * sizeof(char));
	newDog->owner = malloc((len2 + 1) * sizeof(char));
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		newDog->name[i] = name[i];
	newDog->name[i] = '\0';
	for (j = 0; j < len2; j++)
		newDog->owner[j] = owner[j];
	newDog->owner[i] = '\0';
	newDog->age = age;
	return (newDog);
}
