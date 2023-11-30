#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *tmp_node;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			tmp_node = current_node;
			current_node = current_node->next;
			free(tmp_node->key);
			free(tmp_node->value);
			free(tmp_node);
		}
	}
	free(ht->array);
	free(ht);
}
