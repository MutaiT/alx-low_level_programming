#include "main.h"
#include <stdlib.h>

/**
 * lenstr - Gets the length of string
 *
 * @a: String address
 *
 * Return: Size of the string
 */
int lenstr(char *a)
{
	unsigned int i = 0;

	while (a[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - Concatenates n bytes of a string
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes to copy from s2
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int v1, v2, len, x, y;
	char *z;

	/* length of strings */
	if (s1 == NULL)
		v1 = 0;
	else
		v1 = lenstr(s1);
	if (s2 == NULL)
		v2 = 0;
	else
		v2 = lenstr(s2);
	/* where n is >= v2 */
	if (n >= v2)
		len = v2;
	else
		len = n;
	/* memory allocation */
	z = malloc(sizeof(char) * (v1 + len + 1));
	if (z == NULL)
		return (NULL);
	/* concatenate the strings */
	for (x = 0; x < v1; x++)
		z[x] = s1[x];
	for (y = 0; y < len; y++, x++)
		z[x] = s2[y];
	z[x] = '\0';
	return (z);
}
