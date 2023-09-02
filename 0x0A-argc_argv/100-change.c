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
	int cents, coins, coin_count, i;

	/* We declare an array called "coins" with the coin denominations */
	coins[] = {25, 10, 5, 2, 1};
	coin_count = 0;

	/* Check if the number of arguments is not exactly 1 */
	if (argc < 2)
	{
	/* If the conditiion is met, print "Error" followed by a new line */
		printf("Error\n");
		return (1);
	}

	/* Convert the argument provided by the user to integer "cents" */
	cents = atoi(argv[1]);

	/* We check if the value of the variable "cents" is negative */
	if (cents < 0)
	{
	/* If "cents" is negative we print 0 */
		printf("0\n");
		return (0);
	}

	/* Iterate through available coin denominations */
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	/* Print the value of "coin_count" */
	printf("%d\n", coin_count);
	return (0);
}
