#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: Source address
 * @to: Target address
 * Return: 0 (Great)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
