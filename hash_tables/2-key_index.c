#include "hash_tables.h"
/**
 * key_index - calc the index for a given key
 * @key: key to index
 * @size: size of array in hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
