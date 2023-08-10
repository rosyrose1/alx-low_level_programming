#include "hash_tables.h"

/**
 * key_index -Obtain the hash table index associated with a provided key.
 * @key: The key to hash
 * @size: The size of the hash table
 * Return: The index mapped to by key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
