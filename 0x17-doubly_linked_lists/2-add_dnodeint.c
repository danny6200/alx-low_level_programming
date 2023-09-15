/**
 * add_dnodeint - adds a node at the beginning of a DLL
 * @head: points to the pointer to the head node
 * @n: integer data to be added to the DLL
 *
 * Return: NULL or pointer to the added node
 */
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
