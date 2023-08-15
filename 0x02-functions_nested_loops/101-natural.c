#include <stdio.h>

/**
* main - A program that prints the sum of all multiples of 3 & 5 below 1024
*
* Return: 0
*/
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int x;

	sum3 = 0;
	sum5 = 0;
	sum = 0;
	for (x = 0; x < 1024; ++x)
	{
		if ((x % 3) == 0)
		{
			sum3 = sum3 + x;
		}
		else if ((x % 5) == 0)
		{
			sum5 = sum5 + x;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
