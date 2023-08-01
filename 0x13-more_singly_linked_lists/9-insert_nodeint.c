/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: points to the headnode pointer
 * @idx: index at which the node is to be inserted
 * @n: data part of newnode
 * Return: address of newnode
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode, *tmp;

	if (*head == NULL || head == NULL)
		return (NULL);

	tmp = *head;
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
}


