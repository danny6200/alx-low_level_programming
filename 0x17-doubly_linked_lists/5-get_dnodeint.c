/**
 * get_dnodeint_at_index - returns node at a given index
 * @head: points to head node
 * @index: index of required node
 *
 * Return: NULL or pointer to node
 */
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tmp = head;
	i = 0;

	while (tmp->next != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i == index)
		return (tmp);
	return (NULL);
}
