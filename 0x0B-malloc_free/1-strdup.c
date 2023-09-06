#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *
 * @str: The input string
 *
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	int x = 0, y = 0;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
		x++;
	array = malloc((sizeof(char) * x) + 1);
	if (array == NULL)
		return (NULL);
	while (y < x)
	{
		array[y] = str[y];
		y++;
	}
	array[y] = '\0';
	return (array);
}
