#include "main.h"

/**
 * string_toupper - A  function that changes lowercase  to uppercase
 *
 *@str: String with letters to be modified
 *
 * Return: Pointer to the string that is to be modified
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - ('a' - 'A');
		}
		x++;
	}
	return (str);
}
