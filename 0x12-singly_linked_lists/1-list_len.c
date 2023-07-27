/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head node in the linked list
 *
 * Return: number of elements in a linked lists on Success
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t list_len(const list_t *h)
{
	list_t *tmp;
	size_t count = 0;

	tmp = (list_t *)h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
