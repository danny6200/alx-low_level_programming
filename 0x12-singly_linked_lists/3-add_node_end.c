/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to pointer to a node in a linked list
 * @str: data part of the node in a linked lists
 *
 * Return: pointer to the new node
 */
#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
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
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		/*tmp = tmp->next;*/
	}
	return (new_node);
}
