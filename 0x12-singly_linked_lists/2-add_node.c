/**
 * add_node - adds new node at the beginning of a linked list
 * @head: pointer to pointer to struct node
 * @str: data part of new node
 *
 * Return: address of new node
 */
#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	new_node = malloc(sizeof(list_t));
	tmp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		*head = new_node;
		(*head)->next = tmp;
		tmp = *head;
	}
	/*free(new_node);*/
	return (new_node);
}
