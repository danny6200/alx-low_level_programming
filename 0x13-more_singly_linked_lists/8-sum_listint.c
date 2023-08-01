/**
 * sum_listint - summs up the data parts of the nodes in a listint type
 * @head: pointer to the head node of a listint type
 *
 * Return: sum of integral data parts
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
