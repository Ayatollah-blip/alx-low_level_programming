#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter = 0;
	hash_node_t *node;
	int comaPrint = 0;

	if (ht == NULL)
		exit(0);
	printf("{");
	while (counter < ht->size)
	{
		if (ht->array[counter] != NULL)
		{
			if (comaPrint == 1)
			{
				printf(", ");
			}
			node = ht->array[counter];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comaPrint = 1;
		}
		counter = counter + 1;

	}
	printf("}\n");

}
