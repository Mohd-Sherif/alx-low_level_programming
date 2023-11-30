#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: the key.
 * @size: the size of the array of the hash table.
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
