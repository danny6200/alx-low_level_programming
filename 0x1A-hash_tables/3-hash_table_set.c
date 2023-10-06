/**
 * create_hash_node - creates an hash node
 * @key: key of value to be stored
 * @value: value to be stored
 *
 * Return: pointer to the hash_node or NULL
*/
#include "hash_tables.h"
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key of the value to be stored
 * @value: value to be stored
 *
 * Return: 1 on success, 0 otherwise
*/

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
	return (1);
}
