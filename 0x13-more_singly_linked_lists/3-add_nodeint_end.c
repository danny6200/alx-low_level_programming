/**
 * add_nodeint_end - add node to the end of a linked list
 * @head: points to the pointer to the head node
 * @n: data part of the newnode
 *
 * Return: address of newnode
 */
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (newnode);
}
