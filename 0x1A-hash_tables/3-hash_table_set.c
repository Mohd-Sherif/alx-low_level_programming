#include "hash_tables.h"

/**
 * create_new_hash_node - create a node in hash table
 * @key: key
 * @value: value
 *
 * Return: new created node, or NULL if memory allocated failed
 */
hash_node_t *create_new_hash_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	current_node = ht->array[index];
	new_node = create_new_hash_node(key, value);
	if (!new_node)
		return (1);
	if (!current_node)
	{
		ht->array[index] = new_node;
		return (1);
	}
	while (current_node)
	{
		if (!strcmp(current_node->key, key))
		{
			free(current_node->value);
			current_node->value = strdup(value);
			free_node(new_node);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
