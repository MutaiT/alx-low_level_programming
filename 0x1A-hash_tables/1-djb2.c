#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm
 *
 * @str: String generating the hash value
 *
 * Return: Returns the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int j;

	hsh = 5381;
	while ((j = *str++))
	{
		hsh = ((hsh << 5) + hsh) + j; /* hash * 33 + c */
	}
	return (hsh);
}
