/**
 * add_dnodeint_end - adds a node at the end of a DLL
 * @head: points to the pointer to the head node
 * @n: integer data to be added to the DLL
 *
 * Return: NULL or pointer to the added node
 */
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		tail = newnode;
		return (newnode);
	}

	tail = *head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	newnode->prev = tail;
	tail->next = newnode;
	tail = newnode;

	return (newnode);
}
