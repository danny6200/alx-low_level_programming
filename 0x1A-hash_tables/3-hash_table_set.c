/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key of the value to be stored
 * @value: value to be stored
 *
 * Return: 1 on success, 0 otherwise
*/
#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	new_node = create_hash_node(key, value);
	if (!new_node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	free(new_node->key);
	free(new_node->value);
	free(new_node);
	return (1);
}
