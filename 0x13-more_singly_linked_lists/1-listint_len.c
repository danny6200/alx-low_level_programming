/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head node in the linked list
 *
 * Return: numberof nodes on Success
 */
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *tmp;

	tmp = (listint_t *)h;
	if (tmp == NULL)
		return (1);
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
