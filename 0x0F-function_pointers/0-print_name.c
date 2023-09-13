#include "main.h"
#include <stdio.h>

/**
 * print_name - A function that prints the name of a function
 *
 * @name: Pointer
 * @p: Pointer
 *
 * Return: 0 SUCCESS
 */

void print_name(char *name, void (*p)(char *))
{
	if (name == NULL || p == NULL)

		return;
	(*p)(name);
}
