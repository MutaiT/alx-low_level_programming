#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number of coins to make change for some money
 *
 * @argc: The number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: 1 for error, 0 for success
 */
int main(int argc, char *argv[])
{
	int coins, i;

	i = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);

	while (coins > 0)
	{
		if (coins >= 25)
		{
			coins = coins - 25;
		}
		else if (coins >= 10)
		{
			coins = coins - 10;
		}
		else if (coins >= 5)
		{
			coins = coins - 5;
		}
		else if (coins >= 2)
		{
			coins = coins - 2;
		}
		else if (coins >= 1)
		{
			coins = coins - 1;
		}
		i = i + 1;
	}

	printf("%d\n", i);
	return (0);
}
