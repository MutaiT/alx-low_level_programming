#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 *
 * @argc: Number of command  line arguments
 * @argv: The array containingthe command line arguments
 *
 * Return: 0 if successful, 1 for error
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;
	int i, j;

	/* Check if there are exactly two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* Convert the argument strings to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform multiplication */
	result = num1 * num2;

	/* Print the result followed by a new line */
	printf("%d\n", result);

	/* Return success code */
	return (0);
}
