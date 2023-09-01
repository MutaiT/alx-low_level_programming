#include <stdio.h>

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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][1] != '0'; i++)
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			num1 = num1 * 10 + (argv[1][i] - '0';
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	for (j = 0; argv[2][j] != '\0'; j++)
	{
		if (argv[2][j] >= '0' && argv[2][j] <= '9')
		{
			num2 = num2 * 10 + (argv[2][j] - '0';
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
