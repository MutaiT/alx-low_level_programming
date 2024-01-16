#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * Description: deletes a hash table by freeing occupied memory space
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp_next;
	unsigned long int indx = 0;

	if (!ht)
		return;

	while (indx < ht->size)
	{
		temp = ht->array[indx];
		while (temp)
		{
			temp_next = temp->next;
			free(temp->value);
			free(temp->key);
			free(temp);
			temp = temp_next;
		}
		indx++;
	}
	free(ht->array);
	free(ht);
}
