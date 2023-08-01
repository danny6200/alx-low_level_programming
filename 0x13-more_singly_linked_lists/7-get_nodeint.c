/**
 * get_nodeint_at_index - gets the node at a specified index
 * @head: points to the head node of a linked list
 * @index: index at which the node is required
 *
 * Return: address of the node at index 'index'
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp != NULL && index > 0)
	{
		tmp = tmp->next;
		index--;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
