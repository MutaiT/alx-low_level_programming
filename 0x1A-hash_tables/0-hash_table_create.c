#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: Size of the array
 *
 * Return: Returns a pointer to the newly created table
 * returns null if something goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;

	if (size < 1)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	array = calloc(sizeof(new->array),  size);
	if (!array)
		return (NULL);

	new->size = size;
	new->array = array;

	return (new);
}
