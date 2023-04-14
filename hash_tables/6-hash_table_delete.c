#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp1;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
