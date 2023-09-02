#include "main.h"

/**
 *_strcat- A function that concatenates 2 strings
 *
 * The function appends the string src to the string dest
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
