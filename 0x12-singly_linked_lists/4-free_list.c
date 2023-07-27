/**
 * free_list - frees up the dynamically allocated memory to store
 * the node
 * @head: pointer to the head node
 *
 * Return: nothing
 */
#include "lists.h"
#include <stdlib.h>
#include <string.h>

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		if (current->str != NULL)
			free(current->str);
		free(current);
		current = next;
	}
}
