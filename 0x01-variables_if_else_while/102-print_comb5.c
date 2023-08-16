#include <stdio.h>

/**
 * main - A program that prints all combinations of 2 digit numbers from 0-100
 *
 * Return: Great 0
 */
int main(void)
{
	int (i = 0);
	while (i < 100)
		i++;

	int (j = 0);
	while (j < 100)
		j++;

	putchar("%02d %02d", i, j);
	if (i != 99 || j != 99)
		;

	putchar(",");
	return (0);
}
