/**
 * dlistint_len - returns the number of nodes in a dll
 * @h: points to the head node
 *
 * Return: number of nodes
 */
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
