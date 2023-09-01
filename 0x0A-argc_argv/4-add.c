#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: 1 or 0 (Success)
 */
int main(int argc, char *argv[])

	int s;

	if (argc < 2)
	{
		printf("0\n"); /* No numbers provided, so print 0 */
		return (0); /* Success */
	}

	for (int i = 1; i < argc; i++)
	{
	/* Convert the argument to an integer */
		int num = atoi(argv[i]);

	/* Check if the conversion was successful */
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1); /* Conversion error */
		}

		if (num > 0)
		{
			s += num; /* Add the positive number to the sum */
		}
	}

	printf("%d\n", s);
	return (0); /* Return success */
}

