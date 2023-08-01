/**
 * print_listint - prints the lists of integers in the linked list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = (listint_t *)h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	/*free(tmp);*/
	return (count);
}
