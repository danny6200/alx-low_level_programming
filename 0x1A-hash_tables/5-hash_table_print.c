/**
 * hash_table_print - prints the contents of a hash table
 * @ht: points to the hash table
 *
 * Return: nothing
*/

#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;

			if (current)
				printf(", ");
		}

		if (i < ht->size - 1 && ht->array[i + 1])
			printf(", ");
	}
	printf("}\n");
}
