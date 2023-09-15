/**
 * print_dlistint - prints the items in
 * a doubly linked list
 * @h: points to the head node of the doubly linked list
 *
 * Return: number of nodes
 */
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
