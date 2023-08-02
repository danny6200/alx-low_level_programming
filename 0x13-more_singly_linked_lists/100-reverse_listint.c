/**
 * reverse_listint - reverses a linked list of type listint_t
 * @head: points to the head node pointer
 *
 * Return: address of the head node of the reverse linked list
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	prev = NULL;
	if (head == NULL)
		return (NULL);
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
