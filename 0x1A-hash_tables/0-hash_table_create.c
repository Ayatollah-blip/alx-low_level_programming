#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: The size of the hash table
 * Return:A hash table
 */


hash_table_t *hash_table_create(unsigned long int size)
{
int i = 0;
hash_table_t *new_Hash_table;
new_Hash_table = malloc(size * sizeof(long int));
if (new_Hash_table == NULL)
	return NULL;

new_Hash_table->size = size;
new_Hash_table->array = malloc(sizeof(hash_node_t *) * size);

return (new_Hash_table);
}