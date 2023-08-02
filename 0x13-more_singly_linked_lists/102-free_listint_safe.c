/**
 * free_listint_safe - frees a linked list including lists with loops
 * @h: points to the head node pointer of a linked list
 *
 * Return: number of nodes in the linked list
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		current = next;

		if (count > 1000)
			exit(98);
	}
	*h = NULL;
	return (count);
}

