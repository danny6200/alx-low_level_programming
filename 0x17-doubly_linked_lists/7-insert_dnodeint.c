/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: points to pointer that points to head node
 * @idx: index to insert new node
 * @n: integer part of new node
 *
 * Return: NULL or pointer to new node
 */
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	tmp = *h;
	i = 0;

	while (tmp->next != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (i == idx - 1)
	{
		newnode->prev = tmp;
		newnode->next = tmp->next;
		tmp->next = newnode;
		newnode->next->prev = newnode;
		return (newnode);
	}
	return (NULL);
}
