/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: points to the head node pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 on Success and -1 on failure
 */
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}

