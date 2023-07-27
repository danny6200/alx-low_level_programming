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
	if (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free(head);
	}
}

