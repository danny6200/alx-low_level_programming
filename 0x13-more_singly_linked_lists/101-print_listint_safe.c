/**
 * print_listint_safe - prints a linked lists including lists with loops
 * @head: points to the head node
 *
 * Return: number of nodes in the list
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t print_listint_safe(const listint_t *head)
{
	listint_t *current;
	size_t count = 0;

	if (head == NULL)
		return (0);
	current = (listint_t *)head;
	while (current != NULL && (count == 0 || current != head))
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;

		if (count > 1000)
			exit(98);
	}
	return (count);
}
