#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program which outputs a random number of the variable (n)
 *
 * Return: 0 Wonderful
 */
int main(void)
{
	int n = rand() % 11;

	srand(time(0));
	printf("Generated number: %d\n", n);
	if (n > 5)
	{
		printf("The number is greater than 5.\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("The number is less than 6 and not 0.\n");
	}
	else
	{
		printf("The number is 0.\n");
	}
	return (0);
}
