/**
 * key_index - returns the index on the hash
 * table for a given key.
 * @key: string whose index is required
 * @size: size of the hash table
 *
 * Return: hash value
 */
#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	if (key == NULL || size == 0)
	{
		return (0);
	}

	hash =  hash_djb2(key);
	index = hash % size;
	return (index);
}
