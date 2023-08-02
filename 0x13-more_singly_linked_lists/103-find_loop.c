/**
 * find_listint_loop - finds a loop in a linked list
 * @head: pointer to the head node of a linked list
 *
 * Return: address to the start of the loop in the linked list
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = hare;

	if (head == NULL)
		return (NULL);
	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
