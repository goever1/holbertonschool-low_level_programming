#include "hash_tables.h"
/**
 * hash_table_get - retrives a value associated with a key
 * @ht: hash table
 * @key: key
 * return: value of key or NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *actual_node;

	if (ht && key)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		actual_node = (ht->array)[idx];
		while (actual_node)
		{
			if (strcmp(key, actual_node->key) == 0)
				return (actual_node->value);
			actual_node = actual_node->next;
		}
	}
	return (NULL);
}
