#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of characters
 *
 * @size: Size of the array
 * @c: The character to be initialized
 *
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	while (x < size)
	{
		*(arr + x) = c;
		x++;
	}
	return (arr);
}
