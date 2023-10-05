/**
 * hash_table_create - creates a hash table
 * @size: required size of hash table
 *
 * Return: pointer to the table or NULL
*/

#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht = NULL;

ht = malloc(sizeof(hash_node_t) * size);

if (ht == NULL)
{
return (NULL);
}
return (ht);
}
