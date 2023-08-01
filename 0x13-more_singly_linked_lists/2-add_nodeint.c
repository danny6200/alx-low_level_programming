/**
 * add_nodeint -adds node at the beginning of a linked list
 * @head: points to the pointer to the head node
 * @n: data part of a newnode
 *
 * Return: address of the newnode
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
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
		*head = newnode;
		(*head)->next = tmp;
		tmp = newnode;
	}
	return (newnode);
}
