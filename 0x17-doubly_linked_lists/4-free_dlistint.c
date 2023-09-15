/**
 * free_dlistint - frees a DLL
 * @head: points to the head node
 *
 * Return: nothing
 */
#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *next;

	if (head == NULL)
		return;

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
