#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node_get, *buff;

id = key_index((unsigned char *)key, ht->size);
buff = malloc(sizeof(node_get));
node_get = malloc(sizeof(node_get));
if (strcmp(ht->array[id]->key, key) == 0)
	{
	buff->key = key;
	buff->value = ht->array[id]->value;
	buff->next = node_get;
	node_get = buff;
	return (node_get);
	}
else
	return (NULL);

}
