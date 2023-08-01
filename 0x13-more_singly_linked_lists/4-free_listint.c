/**
 * free_listint - frees up the memory used to hold a linked list
 * @head: pointer to the head node of a linked list
 *
 * Return: nothing
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
void free_listint(listint_t *head)
{
	listint_t *tmp, *next;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
