#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints the elements of a linked list
 * @h: pointer to the linked list
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	list_t *tmp;
	size_t count = 0;

	/* Typecast h to remove its const nature while assigning it to tmp */
	tmp = (list_t *)h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			tmp = tmp->next;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			count++;
			tmp = tmp->next;
		}
	}
	return (count);
}
