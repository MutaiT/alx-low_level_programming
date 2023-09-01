#include "main.h"
#include <stdio.h>

/**
 * main - Point where execution begins
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: 0 Great
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		_putchar("Program name: %s\n", argv[0]);
	}
	else
	{
		_putchar("Unable to determine program name.\n");
	}
	return (0);
}
