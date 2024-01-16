#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 *
 * @key: The key that is being hashed
 * @size: Size of the array of the hash table
 *
 * Return: Returns the index of the key provided
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
