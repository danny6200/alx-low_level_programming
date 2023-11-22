/**
 * hash_table_get - retrieves the value of a key from a hash table
 * @ht: pointer to hash table
 * @key: key whose value is to be retrieved
 *
 * Return: value or NULL
*/
#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
