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
