/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: points to pointer that points to head node
 * @index: index of node to be deleted
 *
 * Return: 1 on success or -1 on failure
 */
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *prev, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	i = 0;

	while (tmp->next != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i == index)
	{
		prev = tmp->prev;
		next = tmp->next;

		if (prev != NULL)
			prev->next = next;
		if (next != NULL)
			next->prev = prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
