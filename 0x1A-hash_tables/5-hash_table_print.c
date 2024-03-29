#include "hash_tables.h"

/**
 * hash_table_print - prints the items in a hash table
 *
 * @ht: the hash table to print
 *
 * Description: prints nothing if hash table is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array, *temp;
	unsigned long int indx = 0;
	int flag = 0;

	/* if hash table is NULL */
	if (!ht)
		return;
	putchar('{');
	array = ht->array;
	/* iterate through the array */
	while (indx < ht->size)
	{
		temp = array[indx];
		if (flag == 1 && temp)
			printf(", ");
		/* print all elements at a particular node */
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp)
				printf(", ");
			flag = 1;
		}
		indx++;
	}
	printf("}\n");
}
