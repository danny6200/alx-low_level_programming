/**
 * sum_dlistint - sums up the integers in a DLL
 * @head: points to the head node
 *
 * Return: 0 or some integer
 */
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);

	tmp = head;
	sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
