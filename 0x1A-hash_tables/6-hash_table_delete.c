/**
 * hash_table_delete - deletes a hash table
 * @ht: points to a hash table
 *
 * Return: nothing
*/
#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *next;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
