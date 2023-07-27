#ifndef LIST_H
#define LIST_H
#include <stddef.h>
/**
 * struct node - is a data type for a node used in a linked list
 * @str: pointer to a char. Actualy a character array
 * @len: number of characters in 'str'
 * @next: pointer to the next node
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;


/* Function Prototypes */

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head,const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
