#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 *
 * @argc: Number of arguments
 * @argv: Argument Vector
 *
 * Return: 0 Great
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int i = argc - 1;  /* Calculate the number of arguments */

	printf("%d\n", i);  /* Print the number of arguments followed by a new line */
	return (0);
}

