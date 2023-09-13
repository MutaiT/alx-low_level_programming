#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Prints the opcodes of the program below
 *
 * @a: Main function address
 * @n: Number of bytes to be printed
 *
 * Return: Void
**/
void print_opcodes(char *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%.2hhx", a[j]);

		if (j < n - 1)
			printf(" ");
	}
		printf("\n");

}

/**
 * main - Prints opcodes of its own main function
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 Great
 */
int main(int argc, char **argv)
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, x);

	return (0);
}
