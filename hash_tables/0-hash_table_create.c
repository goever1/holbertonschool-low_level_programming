#include "hash_tables.h"
/**
 * hash_table_create - it creats a has table
 * @size: hash tables's size
 * Return: pointer whn success, null if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *teb;
	hash_node_t **teb_arr;

	teb = calloc(1, sizeof(*teb));
	if (!teb)
		return (NULL);
	teb_arr = calloc(size, sizeof(*teb_arr));
	if (!teb_arr)
	{
		free(teb);
		return(NULL);
	}
	teb->size = size;
	teb->array = teb_arr;
	return (teb);
}
