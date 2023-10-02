#include "hash_tables.h"

/**
 * key_index - Must associate a index to a key.
 * @key: Is the Key to index.
 * @size: Is the size of the hash table.
 *
 * Return: Is a integer after the operations.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
