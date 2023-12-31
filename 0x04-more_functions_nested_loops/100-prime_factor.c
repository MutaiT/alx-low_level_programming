#include <stdio.h>
#include <math.h>

/**
 * main -  A program that prints the largest prime factor
 *
 * Return: 0 Great
 */
int main(void)
{
	long int x;
	long int highest;
	long int y;

	x = 612852475143;
	highest = -1;

	while (x % 2 == 0)
	{
		highest = 2;
		x /= 2;
	}

	for (y = 3; y <= sqrt(x); y = y + 2)
	{
		while (x % y == 0)
		{
			highest = y;
			x = x / y;
		}
	}

	if (x > 2)
		highest = x;

	printf("%ld\n", highest);

	return (0);
}


