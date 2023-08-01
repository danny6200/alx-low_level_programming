/**
 * free_listint2 - frees the memory used and
 * assign NULL to the head node pointer
 * @head: points to the head node pointer
 *
 * Return: nothing
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

void free_listint2(listint_t **head)
{
	listint_t *tmp, *next;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}
