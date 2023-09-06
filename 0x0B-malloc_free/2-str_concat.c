#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int x1 = 0, x2 = 0, i, y = 0, z = 0;

	/* get length of strings s1 and s2 */
	if (s1 != NULL)
	{
		while (s1[x1] != '\0')
			x1++;
	}
	else if (s1 == NULL)
		x1 = 0;
	if (s2 != NULL)
	{
		while (s2[x2] != '\0')
			x2++;
	}
	else if (s2 == NULL)
		x2 = 0;

	/* allocate memory space */
	array = malloc((sizeof(char) * x1) + (sizeof(char) * x2) + 1);
	if (array == NULL)
		return (NULL);

	/* concatenate the strings */
	for (i = 0; i < x1; i++, y++)
		array[i] = s1[y];
	for (; i < x1 + x2; i++, z++)
		array[i] = s2[z];
	array[i] = '\0';
	return (array);
}
