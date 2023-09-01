#include <stdio.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: 0 Great
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
