#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Convert arguments to a string
 *
 * @ac: Argument count
 * @av: Argument string
 *
 * Return: String pointer
 */
char *argstostr(int ac, char **av)
{
	int i, y, str_len = 0, x = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* get length of string */
	for (i = 0; i < ac; i++)
	{
		y = 0;
		while (av[i][y] != '\0')
		{
			str_len++;
			y++;
		}
	}
	/* allocate memory space */
	str_len += (ac + 1);
	string = malloc(sizeof(char) * str_len);
	if (str == NULL)
		return (NULL);
	/* copy arguments to string */
	for (i = 0; i < ac; i++)
	{
		y = 0;
		while (av[i][y] != '\0')
		{
			string[x] = av[i][y];
			x++;
			y++;
		}
		string[x] = '\n';
		x++;
	}
	return (string);
}
