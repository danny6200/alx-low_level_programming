/**
 * pop_listint - pops out the head node of any given linked list
 * @head: points to the head node pointer
 *
 * Return: data part of the popped head node
 */
#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
		return (-1);
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
